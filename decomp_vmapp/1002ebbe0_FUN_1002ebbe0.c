
void FUN_1002ebbe0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_149;
  undefined8 local_148;
  int local_140;
  ushort local_13c;
  undefined1 local_13a;
  undefined1 local_138;
  undefined4 local_137;
  undefined2 local_133;
  char local_131 [247];
  undefined1 local_3a;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  switch(param_1) {
  case 0:
    if (0 < DAT_1011c568c) {
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] INQ_START  (info:%p  param:%d  ctx:%p)",param_2,
                    param_3,param_4);
    }
    break;
  case 1:
    if (0 < DAT_1011c568c) {
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] INQ_STOP  (info:%p  param:%d  ctx:%p)",param_2,
                    param_3,param_4);
    }
    local_149 = 0;
    puVar3 = (undefined8 *)&local_149;
    uVar4 = 1;
    uVar2 = 1;
    goto LAB_1002ebf2a;
  default:
    if (0 < DAT_1011c568c) {
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] INQ_MSG%d  (info:%p  param:%d  ctx:%p)",param_1,
                    param_2,param_3,param_4);
    }
    break;
  case 3:
    if (0 < DAT_1011c568c) {
      FUN_1008e3970(&DAT_100b392f0,"USB",0,
                    "[BTH] INQ_DEV  (addr:%02x-%02x-%02x-%02x-%02x-%02x  class:%06x  name:%s param:%d  ctx:%p)"
                    ,*(undefined1 *)((long)param_2 + 5),*(undefined1 *)(param_2 + 1),
                    *(undefined1 *)((long)param_2 + 3),*(undefined1 *)((long)param_2 + 2),
                    *(undefined1 *)((long)param_2 + 1),*(undefined1 *)param_2,param_2[2] & 0xffffff,
                    param_2 + 3,param_3,param_4);
    }
    if ((param_2[2] & 0x1f00 | 0x100) != 0x500) {
      local_13a = 0;
      local_148._0_5_ = CONCAT41(*param_2,1);
      local_148 = (ulong)CONCAT25(*(undefined2 *)(param_2 + 1),(undefined5)local_148);
      local_13c = (ushort)*(byte *)((long)param_2 + 10);
      local_140 = (uint)(ushort)param_2[2] << 0x10;
      puVar3 = &local_148;
      uVar4 = 2;
      uVar2 = 0xf;
      goto LAB_1002ebf2a;
    }
    if (0 < DAT_1011c568c) {
      if (lVar1 == local_38) {
        FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] INQ_DEV (device was hidden)");
        return;
      }
      goto LAB_1002ebf50;
    }
    break;
  case 4:
    if (0 < DAT_1011c568c) {
      FUN_1008e3970(&DAT_100b392f0,"USB",0,
                    "[BTH] DEV_NAME  (addr:%02x-%02x-%02x-%02x-%02x-%02x  class:%06x  name:%s param:%d  ctx:%p)"
                    ,*(undefined1 *)((long)param_2 + 5),*(undefined1 *)(param_2 + 1),
                    *(undefined1 *)((long)param_2 + 3),*(undefined1 *)((long)param_2 + 2),
                    *(undefined1 *)((long)param_2 + 1),*(undefined1 *)param_2,param_2[2] & 0xffffff,
                    param_2 + 3,param_3,param_4);
    }
    local_138 = 0;
    local_133 = *(undefined2 *)(param_2 + 1);
    local_137 = *param_2;
    _strncpy(local_131,(char *)(param_2 + 3),0xf8);
    local_3a = 0;
    puVar3 = (undefined8 *)&local_138;
    uVar4 = 7;
    uVar2 = 0xff;
LAB_1002ebf2a:
    FUN_1002eb5e0(param_4,uVar4,puVar3,uVar2,0,0);
  }
  if (lVar1 == local_38) {
    return;
  }
LAB_1002ebf50:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

