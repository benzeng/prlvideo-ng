
long * FUN_10029bbc0(undefined8 param_1,char param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  char *pcVar7;
  
  plVar5 = operator_new(0x68,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar5 == (long *)0x0) {
    pcVar7 = "out";
    if (param_2 != '\0') {
      pcVar7 = "in";
    }
    plVar5 = (long *)0x0;
    FUN_1008e3970("","LocalDevices",0,"[CHostAudio] [%s] create failed: OOM",pcVar7);
  }
  else {
    FUN_10029b950(plVar5,param_1,param_2,param_3);
    lVar1 = plVar5[2];
    lVar3 = plVar5[3];
    uVar6 = (**(code **)(*(long *)plVar5[5] + 0x10))();
    cVar4 = FUN_100409380(lVar1,(char)lVar3,uVar6,*(undefined4 *)((long)plVar5 + 0x1c),
                          (int)plVar5[4],*(undefined1 *)((long)plVar5 + 0x24));
    if (cVar4 == '\0') {
      pcVar7 = "out";
      if (param_2 != '\0') {
        pcVar7 = "in";
      }
      FUN_1008e3970("","LocalDevices",0,"[CHostAudio] [%s] create failed: open stream",pcVar7);
      (**(code **)(*plVar5 + 8))(plVar5);
      plVar5 = (long *)0x0;
    }
    else {
      cVar4 = (**(code **)(*(long *)plVar5[5] + 0x18))();
      if (cVar4 != '\0') {
        *(undefined4 *)(plVar5 + 10) = 1;
      }
      bVar2 = cVar4 == '\0';
      FUN_100409c60((char)plVar5[3],bVar2,extraout_RDX,bVar2);
      FUN_100409820(plVar5 + 1,(char)plVar5[3]);
    }
  }
  return plVar5;
}

