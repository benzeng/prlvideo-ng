
void FUN_100253630(undefined8 param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  puVar3 = (undefined1 *)(*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_getAddress_100bed3e0);
  *param_2 = puVar3[5];
  param_2[1] = puVar3[4];
  param_2[2] = puVar3[3];
  param_2[3] = puVar3[2];
  param_2[4] = puVar3[1];
  param_2[5] = *puVar3;
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_nameOrAddress_100bed3e8);
  pcVar5 = (char *)(*(code *)puVar1)(uVar4,PTR_s_UTF8String_100bed218);
  _strncpy(param_2 + 0xc,pcVar5,0xf8);
  param_2[0x103] = 0;
  uVar2 = (*(code *)puVar1)(param_1,PTR_s_classOfDevice_100bed3f0);
  *(undefined4 *)(param_2 + 8) = uVar2;
  return;
}

