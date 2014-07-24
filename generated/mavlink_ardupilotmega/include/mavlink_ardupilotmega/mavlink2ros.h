// Automatically Generated in 2014-07-24 21:08:34.253764
#ifndef MAVLINK_ARDUPILOTMEGA_MAVLINK2ROS_H
#define MAVLINK_ARDUPILOTMEGA_MAVLINK2ROS_H
#include <mavlink_common/HEARTBEAT.h>
#include <mavlink_common/SYS_STATUS.h>
#include <mavlink_common/SYSTEM_TIME.h>
#include <mavlink_common/PING.h>
#include <mavlink_common/CHANGE_OPERATOR_CONTROL.h>
#include <mavlink_common/CHANGE_OPERATOR_CONTROL_ACK.h>
#include <mavlink_common/AUTH_KEY.h>
#include <mavlink_common/SET_MODE.h>
#include <mavlink_common/PARAM_REQUEST_READ.h>
#include <mavlink_common/PARAM_REQUEST_LIST.h>
#include <mavlink_common/PARAM_VALUE.h>
#include <mavlink_common/PARAM_SET.h>
#include <mavlink_common/GPS_RAW_INT.h>
#include <mavlink_common/GPS_STATUS.h>
#include <mavlink_common/SCALED_IMU.h>
#include <mavlink_common/RAW_IMU.h>
#include <mavlink_common/RAW_PRESSURE.h>
#include <mavlink_common/SCALED_PRESSURE.h>
#include <mavlink_common/ATTITUDE.h>
#include <mavlink_common/ATTITUDE_QUATERNION.h>
#include <mavlink_common/LOCAL_POSITION_NED.h>
#include <mavlink_common/GLOBAL_POSITION_INT.h>
#include <mavlink_common/RC_CHANNELS_SCALED.h>
#include <mavlink_common/RC_CHANNELS_RAW.h>
#include <mavlink_common/SERVO_OUTPUT_RAW.h>
#include <mavlink_common/MISSION_REQUEST_PARTIAL_LIST.h>
#include <mavlink_common/MISSION_WRITE_PARTIAL_LIST.h>
#include <mavlink_common/MISSION_ITEM.h>
#include <mavlink_common/MISSION_REQUEST.h>
#include <mavlink_common/MISSION_SET_CURRENT.h>
#include <mavlink_common/MISSION_CURRENT.h>
#include <mavlink_common/MISSION_REQUEST_LIST.h>
#include <mavlink_common/MISSION_COUNT.h>
#include <mavlink_common/MISSION_CLEAR_ALL.h>
#include <mavlink_common/MISSION_ITEM_REACHED.h>
#include <mavlink_common/MISSION_ACK.h>
#include <mavlink_common/SET_GPS_GLOBAL_ORIGIN.h>
#include <mavlink_common/GPS_GLOBAL_ORIGIN.h>
#include <mavlink_common/SET_LOCAL_POSITION_SETPOINT.h>
#include <mavlink_common/LOCAL_POSITION_SETPOINT.h>
#include <mavlink_common/GLOBAL_POSITION_SETPOINT_INT.h>
#include <mavlink_common/SET_GLOBAL_POSITION_SETPOINT_INT.h>
#include <mavlink_common/SAFETY_SET_ALLOWED_AREA.h>
#include <mavlink_common/SAFETY_ALLOWED_AREA.h>
#include <mavlink_common/SET_ROLL_PITCH_YAW_THRUST.h>
#include <mavlink_common/SET_ROLL_PITCH_YAW_SPEED_THRUST.h>
#include <mavlink_common/ROLL_PITCH_YAW_THRUST_SETPOINT.h>
#include <mavlink_common/ROLL_PITCH_YAW_SPEED_THRUST_SETPOINT.h>
#include <mavlink_common/SET_QUAD_MOTORS_SETPOINT.h>
#include <mavlink_common/SET_QUAD_SWARM_ROLL_PITCH_YAW_THRUST.h>
#include <mavlink_common/NAV_CONTROLLER_OUTPUT.h>
#include <mavlink_common/SET_QUAD_SWARM_LED_ROLL_PITCH_YAW_THRUST.h>
#include <mavlink_common/STATE_CORRECTION.h>
#include <mavlink_common/REQUEST_DATA_STREAM.h>
#include <mavlink_common/DATA_STREAM.h>
#include <mavlink_common/MANUAL_CONTROL.h>
#include <mavlink_common/RC_CHANNELS_OVERRIDE.h>
#include <mavlink_common/VFR_HUD.h>
#include <mavlink_common/COMMAND_LONG.h>
#include <mavlink_common/COMMAND_ACK.h>
#include <mavlink_common/ROLL_PITCH_YAW_RATES_THRUST_SETPOINT.h>
#include <mavlink_common/MANUAL_SETPOINT.h>
#include <mavlink_common/LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET.h>
#include <mavlink_common/HIL_STATE.h>
#include <mavlink_common/HIL_CONTROLS.h>
#include <mavlink_common/HIL_RC_INPUTS_RAW.h>
#include <mavlink_common/OPTICAL_FLOW.h>
#include <mavlink_common/GLOBAL_VISION_POSITION_ESTIMATE.h>
#include <mavlink_common/VISION_POSITION_ESTIMATE.h>
#include <mavlink_common/VISION_SPEED_ESTIMATE.h>
#include <mavlink_common/VICON_POSITION_ESTIMATE.h>
#include <mavlink_common/HIGHRES_IMU.h>
#include <mavlink_common/FILE_TRANSFER_START.h>
#include <mavlink_common/FILE_TRANSFER_DIR_LIST.h>
#include <mavlink_common/FILE_TRANSFER_RES.h>
#include <mavlink_common/BATTERY_STATUS.h>
#include <mavlink_common/SETPOINT_8DOF.h>
#include <mavlink_common/SETPOINT_6DOF.h>
#include <mavlink_common/MEMORY_VECT.h>
#include <mavlink_common/DEBUG_VECT.h>
#include <mavlink_common/NAMED_VALUE_FLOAT.h>
#include <mavlink_common/NAMED_VALUE_INT.h>
#include <mavlink_common/STATUSTEXT.h>
#include <mavlink_common/DEBUG.h>
#include <mavlink_common/E_MAV_AUTOPILOT.h>
#include <mavlink_common/E_MAV_TYPE.h>
#include <mavlink_common/E_MAV_MODE_FLAG.h>
#include <mavlink_common/E_MAV_MODE_FLAG_DECODE_POSITION.h>
#include <mavlink_common/E_MAV_GOTO.h>
#include <mavlink_common/E_MAV_MODE.h>
#include <mavlink_common/E_MAV_STATE.h>
#include <mavlink_common/E_MAV_COMPONENT.h>
#include <mavlink_common/E_MAV_FRAME.h>
#include <mavlink_common/E_MAVLINK_DATA_STREAM_TYPE.h>
#include <mavlink_common/E_MAV_CMD.h>
#include <mavlink_common/E_MAV_DATA_STREAM.h>
#include <mavlink_common/E_MAV_ROI.h>
#include <mavlink_common/E_MAV_CMD_ACK.h>
#include <mavlink_common/E_MAV_PARAM_TYPE.h>
#include <mavlink_common/E_MAV_RESULT.h>
#include <mavlink_common/E_MAV_MISSION_RESULT.h>
#include <mavlink_common/E_MAV_SEVERITY.h>
#include <mavlink_ardupilotmega/SENSOR_OFFSETS.h>
#include <mavlink_ardupilotmega/SET_MAG_OFFSETS.h>
#include <mavlink_ardupilotmega/MEMINFO.h>
#include <mavlink_ardupilotmega/AP_ADC.h>
#include <mavlink_ardupilotmega/DIGICAM_CONFIGURE.h>
#include <mavlink_ardupilotmega/DIGICAM_CONTROL.h>
#include <mavlink_ardupilotmega/MOUNT_CONFIGURE.h>
#include <mavlink_ardupilotmega/MOUNT_CONTROL.h>
#include <mavlink_ardupilotmega/MOUNT_STATUS.h>
#include <mavlink_ardupilotmega/FENCE_POINT.h>
#include <mavlink_ardupilotmega/FENCE_FETCH_POINT.h>
#include <mavlink_ardupilotmega/FENCE_STATUS.h>
#include <mavlink_ardupilotmega/AHRS.h>
#include <mavlink_ardupilotmega/SIMSTATE.h>
#include <mavlink_ardupilotmega/HWSTATUS.h>
#include <mavlink_ardupilotmega/RADIO.h>
#include <mavlink_ardupilotmega/LIMITS_STATUS.h>
#include <mavlink_ardupilotmega/WIND.h>
#include <mavlink_ardupilotmega/DATA16.h>
#include <mavlink_ardupilotmega/DATA32.h>
#include <mavlink_ardupilotmega/DATA64.h>
#include <mavlink_ardupilotmega/DATA96.h>
#include <mavlink_ardupilotmega/E_MAV_MOUNT_MODE.h>
#include <mavlink_ardupilotmega/E_MAV_CMD.h>
#include <mavlink_ardupilotmega/E_FENCE_ACTION.h>
#include <mavlink_ardupilotmega/E_FENCE_BREACH.h>
#include <mavlink_ardupilotmega/E_LIMITS_STATE.h>
#include <mavlink_ardupilotmega/E_LIMIT_MODULE.h>
#include <mavlink_ardupilotmega/MAV_RAW.h>
#endif // MAVLINK_ARDUPILOTMEGA_MAVLINK2ROS_H