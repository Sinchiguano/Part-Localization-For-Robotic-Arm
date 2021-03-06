; Auto-generated. Do not edit!


(cl:in-package industrial_extrinsic_cal-msg)


;//! \htmlinclude robot_joint_values_triggerGoal.msg.html

(cl:defclass <robot_joint_values_triggerGoal> (roslisp-msg-protocol:ros-message)
  ((joint_values
    :reader joint_values
    :initarg :joint_values
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass robot_joint_values_triggerGoal (<robot_joint_values_triggerGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <robot_joint_values_triggerGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'robot_joint_values_triggerGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name industrial_extrinsic_cal-msg:<robot_joint_values_triggerGoal> is deprecated: use industrial_extrinsic_cal-msg:robot_joint_values_triggerGoal instead.")))

(cl:ensure-generic-function 'joint_values-val :lambda-list '(m))
(cl:defmethod joint_values-val ((m <robot_joint_values_triggerGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader industrial_extrinsic_cal-msg:joint_values-val is deprecated.  Use industrial_extrinsic_cal-msg:joint_values instead.")
  (joint_values m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <robot_joint_values_triggerGoal>) ostream)
  "Serializes a message object of type '<robot_joint_values_triggerGoal>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'joint_values))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'joint_values))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <robot_joint_values_triggerGoal>) istream)
  "Deserializes a message object of type '<robot_joint_values_triggerGoal>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'joint_values) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'joint_values)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<robot_joint_values_triggerGoal>)))
  "Returns string type for a message object of type '<robot_joint_values_triggerGoal>"
  "industrial_extrinsic_cal/robot_joint_values_triggerGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'robot_joint_values_triggerGoal)))
  "Returns string type for a message object of type 'robot_joint_values_triggerGoal"
  "industrial_extrinsic_cal/robot_joint_values_triggerGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<robot_joint_values_triggerGoal>)))
  "Returns md5sum for a message object of type '<robot_joint_values_triggerGoal>"
  "b79b974a6ae3f399e6d798ff6613e367")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'robot_joint_values_triggerGoal)))
  "Returns md5sum for a message object of type 'robot_joint_values_triggerGoal"
  "b79b974a6ae3f399e6d798ff6613e367")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<robot_joint_values_triggerGoal>)))
  "Returns full string definition for message of type '<robot_joint_values_triggerGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%float64[] joint_values~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'robot_joint_values_triggerGoal)))
  "Returns full string definition for message of type 'robot_joint_values_triggerGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%float64[] joint_values~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <robot_joint_values_triggerGoal>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'joint_values) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <robot_joint_values_triggerGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'robot_joint_values_triggerGoal
    (cl:cons ':joint_values (joint_values msg))
))
