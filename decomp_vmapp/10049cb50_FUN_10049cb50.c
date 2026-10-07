
undefined1 FUN_10049cb50(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar5 = _ProcessInformationCopyDictionary(param_1,0xffffffff);
  if (lVar5 == 0) {
    return 0;
  }
  local_48 = 0;
  cVar4 = _CFDictionaryGetValueIfPresent(lVar5,param_2,&local_48);
  if (cVar4 != '\0') {
    pcVar6 = operator_new(0x1000);
    ___bzero(pcVar6,0x1000);
    cVar4 = _CFStringGetFileSystemRepresentation(local_48,pcVar6,0x1000);
    if (cVar4 != '\0') {
      _strlen(pcVar6);
      std::string::__init((char *)&local_60,(ulong)pcVar6);
      local_30 = local_50;
      local_38 = local_58;
      local_40 = local_60;
      uVar1 = param_3[2];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      param_3[2] = local_50;
      param_3[1] = local_58;
      *param_3 = local_60;
      local_60 = uVar2;
      local_58 = uVar3;
      local_50 = uVar1;
      std::string::~string((string *)&local_60);
      operator_delete(pcVar6);
      uVar7 = 1;
      goto LAB_10049cc4f;
    }
    operator_delete(pcVar6);
  }
  uVar7 = 0;
LAB_10049cc4f:
  _CFRelease(lVar5);
  return uVar7;
}

