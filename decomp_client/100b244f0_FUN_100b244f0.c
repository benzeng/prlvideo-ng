
void FUN_100b244f0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  QArrayData *local_38;
  undefined1 local_21;
  
  *param_1 = (long)param_2;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x115) = 0;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  *(undefined4 *)((long)param_1 + 0x8ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x116) = 0;
  *(undefined1 *)((long)param_1 + 0x8b4) = 0;
  *(undefined4 *)(param_1 + 0x117) = 0;
  *(undefined4 *)((long)param_1 + 0x8bc) = 0;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar2 = (**(code **)(*(long *)((long)param_2 + *(long *)(*param_2 + -0x18)) + 0x38))
                    ((long)param_2 + *(long *)(*param_2 + -0x18),&local_48);
  if (-1 < iVar2) {
    lVar1 = *(long *)(*param_1 + 0x20);
    uVar4 = (ulong)*(uint *)(lVar1 + 0x10);
    param_1[0x112] = (CONCAT44(uStack_44,local_48) + -1 + uVar4) / uVar4;
    uVar5 = *(int *)(lVar1 + 8) << 0xc;
    *(uint *)(param_1 + 0x111) = uVar5;
    pvVar3 = _valloc((ulong)uVar5);
    param_1[0x110] = (long)pvVar3;
    if (pvVar3 == (void *)0x0) {
      FUN_100df99c0("Compact","dimg",0,"Error: Buffer[%u] allocation out of memory",uVar5);
    }
    else {
      FUN_100db5f90(param_1 + 5);
      *(undefined4 *)((long)param_1 + 0x7c) = 1;
      param_1[0x10] = param_1[0x110];
      *(int *)(param_1 + 0x11) = (int)param_1[0x111];
      param_1[7] = (long)param_1;
      *(int *)(param_1 + 0xf) = (int)param_1[0x111];
      param_1[0xe] = (long)FUN_100b24720;
      param_1[8] = *param_1;
      param_1[0xb] = param_3;
      lVar1 = *(long *)(*param_1 + 0x20);
      *(undefined4 *)((long)param_1 + 0x88c) = *(undefined4 *)(lVar1 + 8);
      *(undefined4 *)((long)param_1 + 0x8ac) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(param_1 + 0x116) = *(undefined4 *)(lVar1 + 0x10);
      *(undefined4 *)(param_1 + 0x115) = local_48;
      *(undefined1 *)((long)param_1 + 0x8b4) = 1;
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

