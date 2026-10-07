
/* Function Stack Size: 0x18 bytes */

void BTController::isPaired_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  
  cVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_3,PTR_s_isPaired_100bed430);
  *(bool *)(param_1 + _is_paired) = cVar1 != '\0';
  return;
}

