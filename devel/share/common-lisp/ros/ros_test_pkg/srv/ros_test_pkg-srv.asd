
(cl:in-package :asdf)

(defsystem "ros_test_pkg-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "add_two_no" :depends-on ("_package_add_two_no"))
    (:file "_package_add_two_no" :depends-on ("_package"))
  ))