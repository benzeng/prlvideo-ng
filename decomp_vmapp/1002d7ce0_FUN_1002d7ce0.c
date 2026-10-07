
undefined8 FUN_1002d7ce0(undefined8 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_2 + 0x450);
  if (2 < (int)DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] ep process pkt %p",(long)param_1 + 0xcf,param_2);
  }
  if ((1 < (int)DAT_1011c568c) && (*(int *)(param_2 + 0x450) == 0x69)) {
    FUN_1002da980(2,param_2);
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  LOCK();
  *(int *)(param_1[0x18] + 8) = *(int *)(param_1[0x18] + 8) + 1;
  UNLOCK();
  uVar2 = *(byte *)((long)param_1 + 0xcb) & 3;
  if (uVar2 - 2 < 2) {
    (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,param_2);
  }
  else if (uVar2 == 1) {
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2);
  }
  else if ((*(byte *)((long)param_1 + 0xcb) & 3) == 0) {
    FUN_1002d7e00(param_1,param_2);
  }
  if ((*(long *)(param_1[0x18] + 0x10) == 0) || (1 < DAT_1011c568c)) {
    lVar3 = (**(code **)(**(long **)(param_1[0x18] + 0x28) + 0x70))();
    uVar4 = 1;
    if (iVar1 != 0x69) {
      uVar4 = 2;
    }
    FUN_10025b2f0(lVar3 + 0x68,uVar4);
  }
  return 1;
}

