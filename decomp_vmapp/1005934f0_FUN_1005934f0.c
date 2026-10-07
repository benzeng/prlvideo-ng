
void FUN_1005934f0(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bad_alloc *this;
  long local_880;
  undefined4 local_878;
  undefined8 *local_870;
  undefined8 *local_868;
  undefined8 local_850;
  code *local_838;
  int local_830;
  undefined4 local_82c;
  undefined8 local_828;
  int local_820;
  
  *param_1 = param_2;
  param_1[1] = param_6;
  param_1[2] = param_8;
  param_1[3] = param_7;
  param_1[4] = param_3;
  *(uint *)(param_1 + 0x21b) = (uint)(param_3 != 0) * 4 + 1;
  param_1[0x21c] = param_4 / *(uint *)(param_6 + 0x18);
  param_1[0x21d] = param_5;
  param_1[0x21e] = 0xffffffffffffffff;
  param_1[0x21f] = param_4;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)((long)param_1 + 0x1104) = 0;
  *(undefined4 *)(param_1 + 0x221) = 1;
  *(undefined4 *)((long)param_1 + 0x110c) = param_9;
  *(undefined4 *)(param_1 + 0x222) = param_10;
  *(undefined2 *)((long)param_1 + 0x1114) = 0;
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x22d));
  *(undefined4 *)(param_1 + 0x22e) = 0;
  if (param_1[4] == 0) {
    uVar1 = *(uint *)((long *)param_1[1] + 3);
    lVar2 = (**(code **)(*(long *)param_1[1] + 0x30))();
    pvVar3 = _valloc(lVar2 * (ulong)uVar1);
    param_1[4] = pvVar3;
    if (pvVar3 == (void *)0x0) {
      this = (bad_alloc *)___cxa_allocate_exception(8);
      std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(this,PTR_typeinfo_100ba22c0,PTR__bad_alloc_100ba21b8);
    }
    *(undefined1 *)((long)param_1 + 0x1115) = 1;
    uVar1 = *(uint *)((long *)param_1[1] + 3);
    lVar2 = (**(code **)(*(long *)param_1[1] + 0x30))();
    ___bzero(pvVar3,lVar2 * (ulong)uVar1);
  }
  else if (param_1[0x21d] != -1) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","rd_block_off == (PRL_UINT64)-1"
                  ,"Storage.cpp",0xc63,"AsyncBlockReq");
  }
  param_1[0x228] = 0;
  param_1[0x227] = 0;
  param_1[0x226] = 0;
  param_1[0x225] = 0;
  param_1[0x224] = 0;
  param_1[0x223] = 0;
  param_1[0x229] = param_1 + 0x229;
  param_1[0x22a] = param_1 + 0x229;
  param_1[0x22b] = param_1;
  param_1[0x22c] = FUN_100593820;
  FUN_10070ae60(&local_880);
  local_878 = 0;
  local_880 = param_1[0x21f] - (ulong)param_1[0x21f] % (ulong)*(uint *)(param_1[1] + 0x18);
  local_838 = FUN_100593830;
  local_870 = param_1;
  local_868 = param_1;
  local_850 = (**(code **)(**(long **)(param_1[1] + 0x70) + 0x250))();
  lVar2 = ((long *)param_1[1])[3];
  local_830 = (**(code **)(*(long *)param_1[1] + 0x30))();
  local_830 = local_830 * (int)lVar2;
  local_82c = 1;
  local_828 = param_1[4];
  lVar2 = ((long *)param_1[1])[3];
  local_820 = (**(code **)(*(long *)param_1[1] + 0x30))();
  local_820 = local_820 * (int)lVar2;
  _memcpy(param_1 + 5,&local_880,0x858);
  *(undefined4 *)(param_1 + 6) = 0;
  _memcpy(param_1 + 0x110,&local_880,0x858);
  *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) | 1;
  return;
}

