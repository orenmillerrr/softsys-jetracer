#ifndef LEAD_CONTROLLER_HPP_
#define LEAD_CONTROLLER_HPP_

/// \brief Discrete Lead controller: u[k] = a0*e[k] + a1*e[k-1] + b1*u[k-1]
class LeadController {
public:
  LeadController(double a0, double a1, double b1);
  ~LeadController();

  /// \brief Push the latest error sample (e[k])
  void setError(double error);

  /// \brief Compute & return control (u[k])
  double getControl();

private:
  void computeControlValue();

  double a0_, a1_, b1_;
  double error_, prev_error_;
  double control_, prev_control_;
};

#endif  // LEAD_CONTROLLER_HPP_
