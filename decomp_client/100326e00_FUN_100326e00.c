
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100326e00(long param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar11;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  long local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 local_31;
  
  uVar11 = (undefined4)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  if (*(long *)(param_1 + 0x10) == 0) {
    return -0x7fffffff;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return -0x7fffffff;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return -0x7fffffff;
  }
  iVar2 = FUN_100319d30();
  if (iVar2 != 1) {
    return -0x7fffffff;
  }
  FUN_1003261e0(param_1);
  local_48 = 0;
  lVar7 = (*(ulong *)(param_1 + 0x58) + _DAT_100e18980) - *(ulong *)(param_1 + 0x50);
  lVar9 = ((*(ulong *)(param_1 + 0x58) >> 0x20) + _UNK_100e18988) -
          (*(ulong *)(param_1 + 0x50) >> 0x20);
  uVar10 = (undefined4)lVar9;
  uVar1 = (undefined4)lVar7;
  local_38 = *(undefined4 *)(param_1 + 0x30);
  lVar7 = _DAT_100e15000 + lVar7;
  lVar9 = _UNK_100e15008 + lVar9;
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  }
  uVar5 = (uint)lVar7;
  uVar8 = (uint)lVar9;
  uStack_40 = uVar1;
  uStack_3c = uVar10;
  if (((int)(uVar8 | uVar5) < 0) ||
     ((((*(int *)(param_1 + 0x40) == 0 && (uVar5 == *(uint *)(param_1 + 0x48))) &&
       (*(int *)(param_1 + 0x44) == 0)) && (uVar8 == *(uint *)(param_1 + 0x4c))))) {
    if (DAT_10230ffd0 < 4) {
      return 0;
    }
    if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
       (*(long *)(param_1 + 0x18) == 0)) {
      local_80 = (QArrayData *)PTR_shared_null_1021e1288;
    }
    else {
      FUN_1003193e0(&local_80);
    }
    QString::toLocal8Bit();
    if (*(int *)(param_1 + 0x40) == 0) {
      if (uVar5 == *(uint *)(param_1 + 0x48)) {
        if (*(int *)(param_1 + 0x44) == 0) {
          bVar6 = uVar8 == *(uint *)(param_1 + 0x4c);
        }
        else {
          bVar6 = false;
        }
      }
      else {
        bVar6 = false;
      }
    }
    else {
      bVar6 = false;
    }
    FUN_100df99c0("","prl_client_app",4,
                  "Skip VM [%s] screen [%d] capture request. Region to capture %dx%d at (%d, %d) isValid=[%d], sameAsLastCaptured=[%d]"
                  ,local_78 + *(long *)(local_78 + 0x10),*(undefined4 *)(param_1 + 0x30),uVar1,
                  CONCAT44(uVar11,uVar10),0,0,(uVar8 | uVar5) >> 0x1f ^ 1,bVar6);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10032727e;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_10032727e:
    iVar2 = 0;
    if (*(int *)local_80 == -1) {
      return 0;
    }
    pQVar4 = local_80;
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    goto LAB_1003272a2;
  }
  if (3 < DAT_10230ffd0) {
    if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
       (*(long *)(param_1 + 0x18) == 0)) {
      local_58 = (QArrayData *)PTR_shared_null_1021e1288;
    }
    else {
      FUN_1003193e0(&local_58);
    }
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",4,
                  "About to send VM [%s] screen [%d] capture request with rect %dx%d at (%d, %d)",
                  local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(param_1 + 0x30),uStack_40,
                  CONCAT44(uVar11,uStack_3c),(undefined4)local_48,local_48._4_4_);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10032700f;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10032700f:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10032703f;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_10032703f:
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    local_60 = 0;
  }
  else {
    FUN_1003193b0(&local_60);
  }
  iVar2 = _PrlDevSecondaryDisplay_SendCaptureScreenRequest(local_60,&local_48);
  if (local_60 != 0) {
    _PrlHandle_Free();
  }
  if (-1 < iVar2) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(uint *)(param_1 + 0x48) = uVar5;
    *(uint *)(param_1 + 0x4c) = uVar8;
    return 0;
  }
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_1003193e0(&local_70);
  }
  QString::toLocal8Bit();
  pQVar4 = local_68;
  lVar7 = *(long *)(local_68 + 0x10);
  uVar11 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = FUN_100dddcf0(iVar2);
  FUN_100df99c0("","prl_client_app",0,
                "Failed to capture VM [%s] screen [%d]: PrlDevSecondaryDisplay_SendCaptureScreenRequest failed with RC = %.8X [%s]"
                ,pQVar4 + lVar7,uVar11,iVar2,uVar3);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100327161;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100327161:
  if (*(int *)local_70 == -1) {
    return iVar2;
  }
  pQVar4 = local_70;
  if (*(int *)local_70 != 0) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + -1;
    UNLOCK();
    if (*(int *)local_70 != 0) {
      return iVar2;
    }
    local_31 = 0;
  }
LAB_1003272a2:
  QArrayData::deallocate(pQVar4,2,8);
  return iVar2;
}

