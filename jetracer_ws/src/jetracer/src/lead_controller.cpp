#include "lead_controller.hpp"

LeadController::LeadController(double a0, double a1, double b1)
: a0_(a0), a1_(a1), b1_(b1),
  error_(0.0), prev_error_(0.0),
  control_(0.0), prev_control_(0.0)
{}

LeadController::~LeadController() {}

void LeadController::setError(double error) {
  prev_error_ = error_;
  error_ = error;
}

double LeadController::getControl() {
  computeControlValue();
  return control_;
}

void LeadController::computeControlValue() {
  // u[k] = a0*e[k] + a1*e[k-1] + b1*u[k-1]
  control_ = a0_ * error_ + a1_ * prev_error_ + b1_ * prev_control_;
  prev_control_ = control_;
}
