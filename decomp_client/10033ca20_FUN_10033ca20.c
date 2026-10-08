
void FUN_10033ca20(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  QArrayData *pQVar11;
  long lVar12;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  if (param_2 == 1) {
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar8 = FUN_100319c50(uVar8);
    cVar6 = FUN_100332db0(uVar8,&local_40);
    if (cVar6 == '\0') goto LAB_10033cdec;
  }
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("DUCLIENT","prl_client_app",2,"Set guest indents for mode %d (count = %d)",param_2
                  ,*(uint *)(local_40 + 4));
  }
  uVar9 = *(uint *)(local_40 + 4);
  if (0 < (long)(int)uVar9) {
    lVar10 = 0;
    lVar12 = 0;
    do {
      if (1 < DAT_10230ffd0) {
        if (1 < *(uint *)local_40) {
          if ((*(uint *)(local_40 + 8) & 0x7fffffff) == 0) {
            local_40 = (QArrayData *)QArrayData::allocate(0x18,8,0,2);
          }
          else {
            FUN_10033d5b0(&local_40,*(uint *)(local_40 + 4),*(uint *)(local_40 + 8) & 0x7fffffff,0);
          }
        }
        uVar1 = *(undefined4 *)(local_40 + lVar10 + *(long *)(local_40 + 0x10));
        if (1 < *(uint *)local_40) {
          if ((*(uint *)(local_40 + 8) & 0x7fffffff) == 0) {
            local_40 = (QArrayData *)QArrayData::allocate(0x18,8,0,2);
          }
          else {
            FUN_10033d5b0(&local_40,*(uint *)(local_40 + 4),*(uint *)(local_40 + 8) & 0x7fffffff,0);
          }
        }
        uVar2 = *(undefined4 *)(local_40 + lVar10 + 4 + *(long *)(local_40 + 0x10));
        if (1 < *(uint *)local_40) {
          if ((*(uint *)(local_40 + 8) & 0x7fffffff) == 0) {
            local_40 = (QArrayData *)QArrayData::allocate(0x18,8,0,2);
          }
          else {
            FUN_10033d5b0(&local_40,*(uint *)(local_40 + 4),*(uint *)(local_40 + 8) & 0x7fffffff,0);
          }
        }
        uVar3 = *(undefined4 *)(local_40 + lVar10 + 8 + *(long *)(local_40 + 0x10));
        if (1 < *(uint *)local_40) {
          if ((*(uint *)(local_40 + 8) & 0x7fffffff) == 0) {
            local_40 = (QArrayData *)QArrayData::allocate(0x18,8,0,2);
          }
          else {
            FUN_10033d5b0(&local_40,*(uint *)(local_40 + 4),*(uint *)(local_40 + 8) & 0x7fffffff,0);
          }
        }
        uVar4 = *(undefined4 *)(local_40 + lVar10 + 0xc + *(long *)(local_40 + 0x10));
        if (1 < *(uint *)local_40) {
          if ((*(uint *)(local_40 + 8) & 0x7fffffff) == 0) {
            local_40 = (QArrayData *)QArrayData::allocate(0x18,8,0,2);
          }
          else {
            FUN_10033d5b0(&local_40,*(uint *)(local_40 + 4),*(uint *)(local_40 + 8) & 0x7fffffff,0);
          }
        }
        uVar5 = *(undefined4 *)(local_40 + lVar10 + *(long *)(local_40 + 0x10) + 0x10);
        if (1 < *(uint *)local_40) {
          if ((*(uint *)(local_40 + 8) & 0x7fffffff) == 0) {
            local_40 = (QArrayData *)QArrayData::allocate(0x18,8,0,2);
          }
          else {
            FUN_10033d5b0(&local_40,*(uint *)(local_40 + 4),*(uint *)(local_40 + 8) & 0x7fffffff,0);
          }
        }
        FUN_100df99c0("DUCLIENT","prl_client_app",2,
                      " display [%d;%d] indent[left=%d; top=%d; right=%d; bottom=%d]",uVar1,uVar2,
                      uVar3,uVar4,uVar5,
                      *(undefined4 *)(local_40 + lVar10 + *(long *)(local_40 + 0x10) + 0x14));
      }
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 0x18;
    } while (lVar12 < (int)uVar9);
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193b0(&local_48,uVar8);
  lVar10 = local_48;
  uVar9 = *(uint *)(local_40 + 4);
  pQVar11 = (QArrayData *)0x0;
  if (0 < (int)uVar9) {
    if (1 < *(uint *)local_40) {
      if ((*(uint *)(local_40 + 8) & 0x7fffffff) == 0) {
        local_40 = (QArrayData *)QArrayData::allocate(0x18,8,0,2);
      }
      else {
        FUN_10033d5b0(&local_40,uVar9,*(uint *)(local_40 + 8) & 0x7fffffff,0);
      }
    }
    pQVar11 = local_40 + *(long *)(local_40 + 0x10);
    uVar9 = *(uint *)(local_40 + 4);
  }
  iVar7 = _PrlVm_ToolsSetIndents(lVar10,pQVar11,uVar9);
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if ((iVar7 < 0) && (0 < DAT_10230ffd0)) {
    uVar8 = FUN_100dddcf0(iVar7);
    FUN_100df99c0("DUCLIENT","prl_client_app",1,"PrlVm_ToolsSetIndents call error, RC = %.8X [%s]",
                  iVar7,uVar8);
  }
LAB_10033cdec:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,0x18,8);
  }
  return;
}

