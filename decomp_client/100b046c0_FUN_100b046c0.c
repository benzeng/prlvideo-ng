
undefined8 FUN_100b046c0(ulong param_1,int *param_2)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  char local_b8 [128];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_c4 = 0;
  local_38 = lVar1;
  iVar4 = _IORegistryEntryGetChildIterator(param_1,"IOService",&local_c4);
  if (iVar4 == 0) {
    iVar4 = _IOObjectGetClass(param_1 & 0xffffffff,local_b8);
    if (iVar4 == 0) {
      iVar4 = _strcmp(local_b8,"IOUSBDevice");
      bVar2 = false;
      if (iVar4 == 0) {
        local_bc = 0;
        uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
        lVar6 = _IORegistryEntryCreateCFProperty(param_1 & 0xffffffff,&cf_locationID,uVar7,0);
        iVar4 = 0;
        if (lVar6 != 0) {
          _CFNumberGetValue(lVar6,3,&local_bc);
          _CFRelease(lVar6);
          iVar4 = local_bc;
        }
        if (*param_2 == iVar4) {
          cVar3 = FUN_100afbf10(param_1 & 0xffffffff,&cf_BSDName,param_2 + 2,1);
          if (cVar3 == '\0') {
            bVar2 = false;
          }
          else {
            local_c0 = 0;
            lVar6 = _IORegistryEntrySearchCFProperty
                              (param_1 & 0xffffffff,"IOService",&cf_PeripheralDeviceType,uVar7,1);
            bVar2 = true;
            if (lVar6 != 0) {
              cVar3 = _CFNumberGetValue(lVar6,3,&local_c0);
              _CFRelease(lVar6);
              if (cVar3 != '\0') {
                *(bool *)(param_2 + 4) = local_c0 == 5;
              }
            }
          }
        }
        else {
          bVar2 = false;
        }
      }
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      iVar4 = _IOIteratorNext(local_c4);
      do {
        if (iVar4 == 0) {
          _IOObjectRelease(local_c4);
          goto LAB_100b04892;
        }
        iVar5 = _IOIteratorNext();
        cVar3 = FUN_100b046c0(iVar4,param_2);
        _IOObjectRelease(iVar4);
        iVar4 = iVar5;
      } while (cVar3 == '\0');
    }
    _IOObjectRelease(local_c4);
    uVar7 = 1;
  }
  else {
LAB_100b04892:
    uVar7 = 0;
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

