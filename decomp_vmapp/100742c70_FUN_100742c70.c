
int FUN_100742c70(undefined8 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  size_t sVar13;
  
  iVar2 = _IORegistryEntryFromPath(*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,"IOService:/")
  ;
  if (iVar2 == 0) {
    pcVar12 = "GetHwId() failed: IORegistryEntryFromPath";
  }
  else {
    lVar3 = _IORegistryEntryCreateCFProperty
                      (iVar2,&cf_IOPlatformUUID,*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0);
    _IOObjectRelease(iVar2);
    if (lVar3 != 0) {
      lVar4 = _CFStringGetLength(lVar3);
      puVar5 = _calloc(2,8);
      pcVar11 = (char *)0x0;
      pcVar12 = (char *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        lVar4 = lVar4 + 1;
        sVar13 = ((long)(((ulong)(lVar4 >> 0x3f) >> 0x3e) + lVar4) >> 2) + lVar4;
        pcVar6 = _calloc(1,sVar13);
        pcVar11 = (char *)0x0;
        pcVar12 = (char *)0x0;
        if (pcVar6 != (char *)0x0) {
          _CFStringGetCString(lVar3,pcVar6,lVar4,0x8000100);
          _CFRelease(lVar3);
          pcVar7 = _calloc(1,sVar13);
          pcVar8 = pcVar6;
          pcVar11 = pcVar6;
          pcVar9 = pcVar7;
          pcVar12 = (char *)0x0;
          if (pcVar7 != (char *)0x0) {
            do {
              cVar1 = *pcVar8;
              if (cVar1 != '-') {
                if (cVar1 == '\0') goto LAB_100742dd5;
                *pcVar9 = cVar1;
                pcVar9 = pcVar9 + 1;
              }
              pcVar8 = pcVar8 + 1;
            } while( true );
          }
        }
      }
      goto LAB_100742e4c;
    }
    pcVar12 = "GetHwId() failed: IORegistryEntryCreateCFProperty";
  }
  pcVar11 = (char *)0x0;
  iVar2 = -1;
  FUN_10071e690(0xffffffff,pcVar12);
  pcVar12 = (char *)0x0;
  puVar5 = (undefined8 *)0x0;
  goto LAB_100742e6c;
LAB_100742dd5:
  sVar13 = _strlen(pcVar7);
  uVar10 = 0;
  if (sVar13 != 0) {
    iVar2 = 0;
    do {
      if (((int)uVar10 != 0) && ((uVar10 & 3) == 0)) {
        lVar3 = (long)iVar2;
        iVar2 = iVar2 + 1;
        pcVar6[lVar3] = '.';
      }
      lVar3 = (long)iVar2;
      iVar2 = iVar2 + 1;
      pcVar6[lVar3] = pcVar7[uVar10];
      uVar10 = uVar10 + 1;
    } while (sVar13 != uVar10);
  }
  pcVar6 = _strdup(pcVar6);
  *puVar5 = pcVar6;
  pcVar12 = pcVar7;
  if (pcVar6 != (char *)0x0) {
    *param_2 = 1;
    *param_1 = puVar5;
    iVar2 = 0;
    goto LAB_100742e6c;
  }
LAB_100742e4c:
  FUN_10071e690(0xfffffffe,0);
  iVar2 = -1;
LAB_100742e6c:
  _free(pcVar11);
  _free(pcVar12);
  if (iVar2 != 0) {
    FUN_10071d430(puVar5);
  }
  return iVar2;
}

