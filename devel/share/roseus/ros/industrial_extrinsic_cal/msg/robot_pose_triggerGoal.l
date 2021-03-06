;; Auto-generated. Do not edit!


(when (boundp 'industrial_extrinsic_cal::robot_pose_triggerGoal)
  (if (not (find-package "INDUSTRIAL_EXTRINSIC_CAL"))
    (make-package "INDUSTRIAL_EXTRINSIC_CAL"))
  (shadow 'robot_pose_triggerGoal (find-package "INDUSTRIAL_EXTRINSIC_CAL")))
(unless (find-package "INDUSTRIAL_EXTRINSIC_CAL::ROBOT_POSE_TRIGGERGOAL")
  (make-package "INDUSTRIAL_EXTRINSIC_CAL::ROBOT_POSE_TRIGGERGOAL"))

(in-package "ROS")
;;//! \htmlinclude robot_pose_triggerGoal.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass industrial_extrinsic_cal::robot_pose_triggerGoal
  :super ros::object
  :slots (_pose ))

(defmethod industrial_extrinsic_cal::robot_pose_triggerGoal
  (:init
   (&key
    ((:pose __pose) (instance geometry_msgs::Pose :init))
    )
   (send-super :init)
   (setq _pose __pose)
   self)
  (:pose
   (&rest __pose)
   (if (keywordp (car __pose))
       (send* _pose __pose)
     (progn
       (if __pose (setq _pose (car __pose)))
       _pose)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Pose _pose
    (send _pose :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Pose _pose
       (send _pose :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Pose _pose
     (send _pose :deserialize buf ptr-) (incf ptr- (send _pose :serialization-length))
   ;;
   self)
  )

(setf (get industrial_extrinsic_cal::robot_pose_triggerGoal :md5sum-) "f192399f711a48924df9a394d37edd67")
(setf (get industrial_extrinsic_cal::robot_pose_triggerGoal :datatype-) "industrial_extrinsic_cal/robot_pose_triggerGoal")
(setf (get industrial_extrinsic_cal::robot_pose_triggerGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define the goal
geometry_msgs/Pose pose

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

")



(provide :industrial_extrinsic_cal/robot_pose_triggerGoal "f192399f711a48924df9a394d37edd67")


