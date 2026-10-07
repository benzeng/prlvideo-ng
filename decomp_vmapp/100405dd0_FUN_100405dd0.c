
undefined8 FUN_100405dd0(char *param_1,char *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  size_t sVar6;
  bool bVar7;
  undefined1 local_439;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar4 = _IOServiceMatching("IOUSBInterface");
  if (lVar4 != 0) {
    local_439 = 8;
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
    uVar5 = _CFNumberCreate(uVar1,1,&local_439);
    _CFDictionarySetValue(lVar4,&cf_bInterfaceClass,uVar5);
    local_439 = 4;
    uVar5 = _CFNumberCreate(uVar1,1,&local_439);
    _CFDictionarySetValue(lVar4,&cf_bInterfaceSubClass,uVar5);
    iVar3 = _IOServiceGetMatchingService(*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,lVar4);
    bVar7 = iVar3 != 0;
    if ((iVar3 == 0) || (param_1 == (char *)0x0 && param_2 == (char *)0x0)) goto LAB_100405f68;
    lVar4 = _IORegistryEntrySearchCFProperty(iVar3,"IOService",&cf_BSDName,uVar1,1);
    _IOObjectRelease(iVar3);
    if (lVar4 == 0) {
      if (param_1 != (char *)0x0) {
        *param_1 = '\0';
      }
      bVar7 = true;
      if (param_2 != (char *)0x0) {
        *param_2 = '\0';
      }
      goto LAB_100405f68;
    }
    if (param_1 != (char *)0x0) {
      builtin_strncpy(param_1,"/dev/",6);
      sVar6 = _strlen(param_1);
      (param_1 + sVar6)[0] = 'r';
      (param_1 + sVar6)[1] = '\0';
    }
    cVar2 = _CFStringGetCString(lVar4,local_438,0x400,0x600);
    if (cVar2 != '\0') {
      if (param_1 != (char *)0x0) {
        _strcat(param_1,local_438);
      }
      bVar7 = true;
      if (param_2 != (char *)0x0) {
        _strcpy(param_2,local_438);
      }
      goto LAB_100405f68;
    }
    if (param_1 != (char *)0x0) {
      *param_1 = '\0';
    }
    if (param_2 != (char *)0x0) {
      *param_2 = '\0';
    }
  }
  bVar7 = false;
LAB_100405f68:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),bVar7);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

