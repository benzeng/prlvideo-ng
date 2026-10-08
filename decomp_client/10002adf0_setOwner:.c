
/* Function Stack Size: 0x18 bytes */

void PDLFeedbackButtonDelegate::setOwner_
               (ID param_1,SEL param_2,PDLFeedbackControllerPrivate *param_3)

{
  *(PDLFeedbackControllerPrivate **)(param_1 + _owner) = param_3;
  return;
}

