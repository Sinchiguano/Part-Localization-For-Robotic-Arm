
(cl:in-package :asdf)

(defsystem "industrial_extrinsic_cal-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "calibrate" :depends-on ("_package_calibrate"))
    (:file "_package_calibrate" :depends-on ("_package"))
    (:file "camera_observer_trigger" :depends-on ("_package_camera_observer_trigger"))
    (:file "_package_camera_observer_trigger" :depends-on ("_package"))
    (:file "covariance" :depends-on ("_package_covariance"))
    (:file "_package_covariance" :depends-on ("_package"))
    (:file "get_mutable_joint_states" :depends-on ("_package_get_mutable_joint_states"))
    (:file "_package_get_mutable_joint_states" :depends-on ("_package"))
    (:file "set_mutable_joint_states" :depends-on ("_package_set_mutable_joint_states"))
    (:file "_package_set_mutable_joint_states" :depends-on ("_package"))
    (:file "store_mutable_joint_states" :depends-on ("_package_store_mutable_joint_states"))
    (:file "_package_store_mutable_joint_states" :depends-on ("_package"))
    (:file "user_accept" :depends-on ("_package_user_accept"))
    (:file "_package_user_accept" :depends-on ("_package"))
  ))