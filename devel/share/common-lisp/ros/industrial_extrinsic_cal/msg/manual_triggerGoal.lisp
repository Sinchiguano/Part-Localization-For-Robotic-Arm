; Auto-generated. Do not edit!


(cl:in-package industrial_extrinsic_cal-msg)


;//! \htmlinclude manual_triggerGoal.msg.html

(cl:defclass <manual_triggerGoal> (roslisp-msg-protocol:ros-message)
  ((display_message
    :reader display_message
    :initarg :display_message
    :type cl:string
    :initform ""))
)

(cl:defclass manual_triggerGoal (<manual_triggerGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <manual_triggerGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'manual_triggerGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name industrial_extrinsic_cal-msg:<manual_triggerGoal> is deprecated: use industrial_extrinsic_cal-msg:manual_triggerGoal instead.")))

(cl:ensure-generic-function 'display_message-val :lambda-list '(m))
(cl:defmethod display_message-val ((m <manual_triggerGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader industrial_extrinsic_cal-msg:display_message-val is deprecated.  Use industrial_extrinsic_cal-msg:display_message instead.")
  (display_message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <manual_triggerGoal>) ostream)
  "Serializes a message object of type '<manual_triggerGoal>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'display_message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'display_message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <manual_triggerGoal>) istream)
  "Deserializes a message object of type '<manual_triggerGoal>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'display_message) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'display_message) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<manual_triggerGoal>)))
  "Returns string type for a message object of type '<manual_triggerGoal>"
  "industrial_extrinsic_cal/manual_triggerGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'manual_triggerGoal)))
  "Returns string type for a message object of type 'manual_triggerGoal"
  "industrial_extrinsic_cal/manual_triggerGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<manual_triggerGoal>)))
  "Returns md5sum for a message object of type '<manual_triggerGoal>"
  "fabc25e9031743adb6ffd8eade5239dd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'manual_triggerGoal)))
  "Returns md5sum for a message object of type 'manual_triggerGoal"
  "fabc25e9031743adb6ffd8eade5239dd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<manual_triggerGoal>)))
  "Returns full string definition for message of type '<manual_triggerGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%string display_message  # Specify which message displayed to user~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'manual_triggerGoal)))
  "Returns full string definition for message of type 'manual_triggerGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%string display_message  # Specify which message displayed to user~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <manual_triggerGoal>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'display_message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <manual_triggerGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'manual_triggerGoal
    (cl:cons ':display_message (display_message msg))
))
