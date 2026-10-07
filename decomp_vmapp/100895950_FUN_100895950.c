
undefined4
FUN_100895950(undefined8 param_1,undefined8 param_2,undefined4 param_3,int *param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_38;
  
  if (((param_4 == (int *)0x0) || (*param_4 != 0x10)) ||
     (piVar1 = *(int **)(param_4 + 2), piVar1 == (int *)0x0)) {
    FUN_100887ce0(6,0x76,0x72,"p5_crpt2.c",0xcb);
    plVar4 = (long *)0x0;
    uVar3 = 0;
  }
  else {
    local_38 = *(undefined8 *)(piVar1 + 2);
    uVar3 = 0;
    plVar4 = (long *)FUN_1008b1530(0,&local_38,(long)*piVar1);
    if (plVar4 == (long *)0x0) {
      FUN_100887ce0(6,0x76,0x72,"p5_crpt2.c",0xd2);
      plVar4 = (long *)0x0;
    }
    else {
      iVar2 = FUN_100821ab0(*(undefined8 *)*plVar4);
      if (iVar2 == 0x45) {
        uVar3 = FUN_100821ab0(*(undefined8 *)plVar4[1]);
        uVar5 = FUN_100821930(uVar3);
        lVar6 = FUN_100890b50(uVar5);
        if (lVar6 != 0) {
          uVar3 = 0;
          iVar2 = FUN_10088af10(param_1,lVar6,0,0,0,param_7);
          if (iVar2 != 0) {
            iVar2 = FUN_100894390(param_1,*(undefined8 *)(plVar4[1] + 8));
            if (iVar2 < 0) {
              FUN_100887ce0(6,0x76,0x7a,"p5_crpt2.c",0xed);
            }
            else {
              uVar3 = FUN_100895b10(param_1,param_2,param_3,*(undefined8 *)(*plVar4 + 8));
            }
          }
          goto LAB_100895a60;
        }
        uVar5 = 0x6b;
        uVar7 = 0xe5;
      }
      else {
        uVar5 = 0x7c;
        uVar7 = 0xda;
      }
      FUN_100887ce0(6,0x76,uVar5,"p5_crpt2.c",uVar7);
      uVar3 = 0;
    }
  }
LAB_100895a60:
  FUN_1008b1590(plVar4);
  return uVar3;
}

