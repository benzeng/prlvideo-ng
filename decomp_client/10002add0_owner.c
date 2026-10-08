
/* Function Stack Size: 0x10 bytes */

PDLFeedbackControllerPrivate * PDLFeedbackButtonDelegate::owner(ID param_1,SEL param_2)

{
  return *(PDLFeedbackControllerPrivate **)(param_1 + _owner);
}

