
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1004458f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             int param_5,long *param_6)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  uint uVar5;
  undefined1 uVar6;
  QArrayData *pQVar7;
  QArrayData *local_60;
  QArrayData *local_58;
  void *local_50;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  char local_3c;
  undefined1 local_31;
  
  uVar1 = *(uint *)(param_6 + 2);
  local_50 = operator_new__((ulong)uVar1);
  local_48 = 0;
  local_44 = 0;
  local_3c = '\x01';
  local_40 = uVar1;
  if (param_5 < 0x20) {
    if (param_5 - 0xfU < 2) {
      FUN_100446230(param_2,&local_50,param_3,param_4);
    }
    else if (param_5 == 8) {
      FUN_100446400(param_2,&local_50,param_3,param_4);
    }
    else {
      if (param_5 != 0x18) goto LAB_100445b16;
      FUN_100446060(param_2,&local_50,param_3,param_4);
    }
  }
  else {
    if (param_5 != 0x20) {
LAB_100445b16:
      uVar6 = 0;
      FUN_1008e3970("","IOEncoders",0,"Can\'t encode for depth %d",param_5);
      goto LAB_100445b3a;
    }
    FUN_100445e90(param_2,&local_50,param_3,param_4);
  }
  QByteArray::fromRawData((char *)&local_58,(int)local_50);
  qCompress((uchar *)&local_60,(int)*(undefined8 *)(local_58 + 0x10) + (int)local_58,
            *(int *)(local_58 + 4));
  if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
  }
  pQVar7 = local_60 + *(long *)(local_60 + 0x10);
  uVar1 = *(uint *)(local_60 + 4);
  uVar5 = *(uint *)((long)param_6 + 0xc);
  if (*(uint *)(param_6 + 2) < uVar5 + uVar1) {
    uVar3 = (ulong)((double)(uVar5 + uVar1) * _DAT_100b42cf8);
    pvVar4 = operator_new__(uVar3 & 0xffffffff);
    pvVar2 = (void *)*param_6;
    _memcpy(pvVar4,pvVar2,(ulong)*(uint *)(param_6 + 1));
    if ((pvVar2 != (void *)0x0) && (*(char *)((long)param_6 + 0x14) != '\0')) {
      operator_delete__(pvVar2);
      uVar5 = *(uint *)((long)param_6 + 0xc);
    }
    *param_6 = (long)pvVar4;
    *(int *)(param_6 + 2) = (int)uVar3;
    *(undefined1 *)((long)param_6 + 0x14) = 1;
  }
  if (*(uint *)(param_6 + 1) < uVar1 + uVar5) {
    *(uint *)(param_6 + 1) = uVar1 + uVar5;
    uVar5 = *(uint *)((long)param_6 + 0xc);
  }
  _memcpy((void *)((ulong)uVar5 + *param_6),pQVar7,(ulong)uVar1);
  *(int *)((long)param_6 + 0xc) = *(int *)((long)param_6 + 0xc) + uVar1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100445ae1;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100445ae1:
  uVar6 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100445b3a;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100445b3a:
  if ((local_3c != '\0') && (local_50 != (void *)0x0)) {
    operator_delete__(local_50);
  }
  return uVar6;
}

