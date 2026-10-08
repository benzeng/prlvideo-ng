
/* Function Stack Size: 0x18 bytes */

ID PDLFeedbackButtonDelegate::initWithOwner_
             (ID param_1,SEL param_2,PDLFeedbackControllerPrivate *param_3)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_PDLFeedbackButtonDelegate_10226aba8;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,PTR_s_init_102268ca8);
  if (IVar1 != 0) {
    *(PDLFeedbackControllerPrivate **)(IVar1 + _owner) = param_3;
  }
  return IVar1;
}

