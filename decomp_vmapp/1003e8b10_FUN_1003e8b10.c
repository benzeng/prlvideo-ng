
char FUN_1003e8b10(long *param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined4 local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = 0;
  local_60 = 0;
  local_68 = 0;
  local_40 = 0x25;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  pcVar2 = *(code **)(*param_1 + 0xb0);
  local_30 = lVar1;
  uVar4 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar5 = (*pcVar2)(param_1,uVar4,&local_40,2,&local_60,8,&local_58,0x12,&local_68);
  cVar3 = (((byte)local_58 & 0x70) == 0x70) * '\x02';
  if (iVar5 < 0) {
    cVar3 = '\x02';
  }
  if (lVar1 == local_30) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

