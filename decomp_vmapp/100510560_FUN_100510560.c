
void FUN_100510560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_respondsToSelector__100bed958);
  if (cVar1 != '\0') {
    (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_performSelector__100bed960,param_3);
    return;
  }
  return;
}

