
bool FUN_10049a540(byte *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char cVar5;
  ulong uVar6;
  
  if ((*param_2 & 1) == 0) {
    uVar6 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar6 = *(ulong *)(param_2 + 8);
  }
  uVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSWorkspace_100bedaf8,PTR_s_sharedWorkspace_100bed200);
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_stringWithUTF8String__100bed208,
                     param_1);
  puVar4 = PTR__objc_msgSend_100ba25e8;
  if (uVar6 == 0) {
    cVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar1,PTR_s_openFile__100bed6f0,uVar2);
  }
  else {
    if ((*param_2 & 1) == 0) {
      param_2 = param_2 + 1;
    }
    else {
      param_2 = *(byte **)(param_2 + 0x10);
    }
    uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_stringWithUTF8String__100bed208,
                       param_2);
    cVar5 = (*(code *)puVar4)(uVar1,PTR_s_openFile_withApplication_andDeac_100bed6f8,uVar2,uVar3,1);
  }
  return cVar5 != '\0';
}

