
void FUN_10080dae0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_10081d580(param_1 + 0x1a0,0xffffffff,0x10,"ssl_lib.c",0x203);
    if (iVar1 < 1) {
      if (*(long *)(param_1 + 0xb0) != 0) {
        FUN_1008c0f90();
      }
      FUN_10081fa50(1,param_1,param_1 + 0x188);
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 != 0) {
        if (lVar3 == *(long *)(param_1 + 0x18)) {
          uVar2 = FUN_10087e0a0();
          *(undefined8 *)(param_1 + 0x18) = uVar2;
          lVar3 = *(long *)(param_1 + 0x20);
        }
        FUN_10087d4e0(lVar3);
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10087e280();
      }
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x10))) {
        FUN_10087e280();
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        FUN_10087cd20();
      }
      if (*(long *)(param_1 + 0xb8) != 0) {
        FUN_100884dd0();
      }
      if (*(long *)(param_1 + 0xc0) != 0) {
        FUN_100884dd0();
      }
      if (*(long *)(param_1 + 0x130) != 0) {
        FUN_100814870(param_1);
        FUN_100813340(*(undefined8 *)(param_1 + 0x130));
      }
      FUN_10080d670(param_1);
      if (*(long *)(param_1 + 0xd8) != 0) {
        FUN_10088ae30();
      }
      *(undefined8 *)(param_1 + 0xd8) = 0;
      if (*(long *)(param_1 + 0xf0) != 0) {
        FUN_10088ae30();
      }
      *(undefined8 *)(param_1 + 0xf0) = 0;
      if (*(long *)(param_1 + 0x100) != 0) {
        FUN_1008121f0();
      }
      if (*(long *)(param_1 + 0x1e0) != 0) {
        FUN_10081e1a0();
      }
      if (*(long *)(param_1 + 0x270) != 0) {
        FUN_10080e050();
      }
      if (*(long *)(param_1 + 0x220) != 0) {
        FUN_10081e1a0();
      }
      if (*(long *)(param_1 + 0x230) != 0) {
        FUN_10081e1a0();
      }
      if (*(long *)(param_1 + 0x238) != 0) {
        FUN_10081e1a0();
      }
      if (*(long *)(param_1 + 0x200) != 0) {
        FUN_100885590(*(long *)(param_1 + 0x200),FUN_1008aae80);
      }
      if (*(long *)(param_1 + 0x1f8) != 0) {
        FUN_100885590(*(long *)(param_1 + 0x1f8),FUN_1008d7fc0);
      }
      if (*(long *)(param_1 + 0x208) != 0) {
        FUN_10081e1a0();
      }
      if (*(long *)(param_1 + 0x198) != 0) {
        FUN_100885590(*(long *)(param_1 + 0x198),FUN_1008a11b0);
      }
      if (*(long *)(param_1 + 8) != 0) {
        (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1);
      }
      if (*(long *)(param_1 + 0x170) != 0) {
        FUN_10080e050();
      }
      if (*(long *)(param_1 + 0x278) != 0) {
        FUN_10081e1a0();
      }
      if (*(long *)(param_1 + 0x288) != 0) {
        FUN_100884dd0();
      }
      FUN_10081e1a0(param_1);
      return;
    }
  }
  return;
}

