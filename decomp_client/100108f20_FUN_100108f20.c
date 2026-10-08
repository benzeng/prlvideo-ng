
bool FUN_100108f20(undefined4 param_1,undefined8 param_2,uint *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  uint local_34;
  long local_30;
  
  pcVar1 = DAT_102311b88;
  if (DAT_102311b88 == (code *)0x0) {
    bVar7 = false;
  }
  else {
    local_30 = 0;
    uVar3 = (*DAT_1023119d8)();
    iVar4 = (*pcVar1)(uVar3,param_1,param_2,&local_30);
    if (iVar4 == 0) {
      if (local_30 == 0) {
        bVar7 = false;
      }
      else {
        lVar5 = _CFGetTypeID();
        lVar6 = _CFNumberGetTypeID();
        if (lVar5 == lVar6) {
          local_34 = 0;
          cVar2 = _CFNumberGetValue(local_30,3,&local_34);
          bVar7 = cVar2 != '\0';
          if (bVar7) {
            *param_3 = local_34;
          }
        }
        else {
          bVar7 = false;
        }
        if (local_30 != 0) {
          _CFRelease();
        }
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}

