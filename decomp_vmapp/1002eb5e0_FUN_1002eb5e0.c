
undefined8
FUN_1002eb5e0(long *param_1,byte param_2,void *param_3,uint param_4,void *param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  uint local_97c;
  undefined1 local_978 [2368];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar7;
  lVar4 = (**(code **)(*param_1 + 0x60))(param_1,0x81,param_4 + 2 + param_6,FUN_1002df330,0);
  uVar5 = 0x20;
  if (lVar4 != 0) {
    pbVar3 = *(byte **)(lVar4 + 0x10);
    *pbVar3 = param_2;
    pbVar3[1] = (char)param_6 + (char)param_4;
    if (param_3 != (void *)0x0) {
      _memcpy(pbVar3 + 2,param_3,(ulong)param_4);
    }
    if (param_5 != (void *)0x0) {
      _memcpy((void *)((ulong)param_4 + 2 + *(long *)(lVar4 + 0x10)),param_5,(ulong)param_6);
    }
    if (0 < DAT_1011c568c) {
      bVar1 = *pbVar3;
      bVar2 = pbVar3[1];
      local_97c = (uint)bVar1;
      plVar6 = (long *)FUN_1002ee340(param_1 + 0xb,&local_97c);
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] EVT(%04x:%d) %s",(uint)bVar1,bVar2,
                    *(undefined8 *)(*plVar6 + 8));
      if (0 < DAT_1011c568c) {
        FUN_1002da020(local_978,0x940,*(long *)(lVar4 + 0x10) + 2,pbVar3[1]);
        FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] OUT:%s",local_978);
      }
    }
    (**(code **)(*param_1 + 0x50))(param_1,lVar4);
    uVar5 = 0;
    lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar7 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

