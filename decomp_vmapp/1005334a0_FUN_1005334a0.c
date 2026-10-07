
bool FUN_1005334a0(ulong *param_1)

{
  long lVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  utimbuf local_138;
  undefined1 local_121;
  byte local_120 [16];
  undefined2 local_110;
  undefined4 local_10e;
  undefined2 local_10a;
  undefined2 local_108;
  undefined4 local_106;
  undefined2 local_102;
  undefined2 local_f8;
  undefined4 local_f6;
  undefined2 local_f2;
  undefined2 local_de;
  undefined1 local_88 [80];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  if ((param_1[4] & 1) == 0) {
    uVar5 = (long)param_1 + 0x21;
  }
  else {
    uVar5 = param_1[6];
  }
  local_38 = lVar1;
  iVar3 = _FSPathMakeRef(uVar5,local_88,&local_121);
  if (iVar3 == 0) {
    uVar7 = 0x960;
    if ((short)param_1[3] != 0) {
      uVar7 = 0xd60;
    }
    bVar8 = false;
    sVar2 = _FSGetCatalogInfo(local_88,(int)param_1[7] * 2 & 2U | uVar7,local_120,0,0,0);
    if (sVar2 == 0) {
      lVar4 = *param_1 / 10000000 - 0x239eae080;
      local_10e = (undefined4)lVar4;
      local_110 = (undefined2)((ulong)lVar4 >> 0x20);
      local_10a = 0;
      lVar4 = param_1[1] / 10000000 - 0x239eae080;
      local_f6 = (undefined4)lVar4;
      local_f8 = (undefined2)((ulong)lVar4 >> 0x20);
      local_f2 = 0;
      lVar4 = param_1[2] / 10000000 - 0x239eae080;
      local_106 = (undefined4)lVar4;
      local_108 = (undefined2)((ulong)lVar4 >> 0x20);
      local_102 = 0;
      if ((short)param_1[3] != 0) {
        local_de = *(undefined2 *)((long)param_1 + 0x1a);
      }
      sVar2 = _FSSetCatalogInfo(local_88,uVar7,local_120);
      if (sVar2 == 0) {
        local_138.actime = (long)(param_1[1] + 0xfe624e212ac18000) / 10000000;
        local_138.modtime = (long)(param_1[2] + 0xfe624e212ac18000) / 10000000;
        if ((param_1[4] & 1) == 0) {
          pcVar6 = (char *)((long)param_1 + 0x21);
        }
        else {
          pcVar6 = (char *)param_1[6];
        }
        iVar3 = _utime(pcVar6,&local_138);
        if (iVar3 == 0) {
          bVar8 = true;
          if ((param_1[7] & 1) != 0) {
            local_120[0] = local_120[0] | 1;
            sVar2 = _FSSetCatalogInfo(local_88,2,local_120);
            bVar8 = sVar2 == 0;
          }
        }
        else {
          bVar8 = false;
        }
      }
      else {
        bVar8 = false;
      }
    }
  }
  else {
    bVar8 = false;
  }
  if (lVar1 == local_38) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

