// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from softsys_msgs:msg/Safety.idl
// generated code does not contain a copyright notice

#include "softsys_msgs/msg/detail/safety__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_softsys_msgs
const rosidl_type_hash_t *
softsys_msgs__msg__Safety__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4f, 0x8a, 0x53, 0x1c, 0x49, 0xa4, 0xbb, 0x97,
      0x76, 0xd1, 0xa9, 0x57, 0xb0, 0xf5, 0x6c, 0x4c,
      0xfe, 0x25, 0xa2, 0xf1, 0x53, 0x77, 0x1f, 0x3a,
      0x5f, 0x2a, 0x3c, 0x0d, 0x73, 0xca, 0x8e, 0xc2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char softsys_msgs__msg__Safety__TYPE_NAME[] = "softsys_msgs/msg/Safety";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char softsys_msgs__msg__Safety__FIELD_NAME__header[] = "header";
static char softsys_msgs__msg__Safety__FIELD_NAME__is_auto[] = "is_auto";
static char softsys_msgs__msg__Safety__FIELD_NAME__is_auto_steer[] = "is_auto_steer";
static char softsys_msgs__msg__Safety__FIELD_NAME__is_auto_throttle[] = "is_auto_throttle";
static char softsys_msgs__msg__Safety__FIELD_NAME__is_emergency_stop[] = "is_emergency_stop";
static char softsys_msgs__msg__Safety__FIELD_NAME__is_recieving_joystick[] = "is_recieving_joystick";
static char softsys_msgs__msg__Safety__FIELD_NAME__is_recieving_auto_steer[] = "is_recieving_auto_steer";
static char softsys_msgs__msg__Safety__FIELD_NAME__is_recieving_auto_throttle[] = "is_recieving_auto_throttle";

static rosidl_runtime_c__type_description__Field softsys_msgs__msg__Safety__FIELDS[] = {
  {
    {softsys_msgs__msg__Safety__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {softsys_msgs__msg__Safety__FIELD_NAME__is_auto, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {softsys_msgs__msg__Safety__FIELD_NAME__is_auto_steer, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {softsys_msgs__msg__Safety__FIELD_NAME__is_auto_throttle, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {softsys_msgs__msg__Safety__FIELD_NAME__is_emergency_stop, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {softsys_msgs__msg__Safety__FIELD_NAME__is_recieving_joystick, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {softsys_msgs__msg__Safety__FIELD_NAME__is_recieving_auto_steer, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {softsys_msgs__msg__Safety__FIELD_NAME__is_recieving_auto_throttle, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription softsys_msgs__msg__Safety__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
softsys_msgs__msg__Safety__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {softsys_msgs__msg__Safety__TYPE_NAME, 23, 23},
      {softsys_msgs__msg__Safety__FIELDS, 8, 8},
    },
    {softsys_msgs__msg__Safety__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "bool is_auto\n"
  "bool is_auto_steer\n"
  "bool is_auto_throttle\n"
  "bool is_emergency_stop\n"
  "bool is_recieving_joystick\n"
  "bool is_recieving_auto_steer\n"
  "bool is_recieving_auto_throttle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
softsys_msgs__msg__Safety__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {softsys_msgs__msg__Safety__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 187, 187},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
softsys_msgs__msg__Safety__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *softsys_msgs__msg__Safety__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
