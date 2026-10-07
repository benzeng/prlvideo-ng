
undefined8 FUN_1002ec640(long param_1,undefined1 *param_2,undefined2 param_3,char param_4)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char local_60;
  undefined2 local_5f;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_50 = *param_2;
  local_4f = param_2[1];
  local_4e = param_2[2];
  local_4d = param_2[3];
  local_4c = param_2[4];
  local_4b = param_2[5];
  local_4a = 0;
  local_49 = 0x11;
  local_48 = 0x22;
  local_47 = 0x33;
  local_46 = 0x44;
  local_45 = 0x55;
  local_44 = 0x66;
  local_43 = 0x77;
  local_42 = 0x88;
  local_41 = 0x99;
  local_40 = 0xaa;
  local_3f = 0xbb;
  local_3e = 0xcc;
  local_3d = 0xdd;
  local_3c = 0xee;
  local_3b = 0xff;
  local_3a = 0;
  if (0 < DAT_1011c568c) {
    pcVar4 = "Connect";
    if (*(short *)(param_1 + 0x17c) != 0) {
      pcVar4 = "Authenticate";
    }
    FUN_1008e3970(&DAT_100b392f0,"USB",0,
                  "[BTH] Do%sComplete (%02x-%02x-%02x-%02x-%02x-%02x, auth_hndl = %04x, hndl = %04x, status = %02x)"
                  ,pcVar4,local_4b,local_4c,local_4d,local_4e,local_4f,local_50,
                  *(short *)(param_1 + 0x17c),param_3,param_4);
  }
  if (*(short *)(param_1 + 0x17c) == 0) {
    sVar1 = 0;
    if ((param_4 != '\0') || (sVar1 = 0, *(int *)(param_1 + 0x180) == 0)) goto LAB_1002ec7a7;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x17c);
    if (param_4 != '\0') goto LAB_1002ec7a7;
  }
  FUN_1002eb5e0(param_1,0x18,&local_50,0x17,0,0);
  sVar1 = *(short *)(param_1 + 0x17c);
LAB_1002ec7a7:
  local_5d = *param_2;
  local_5c = param_2[1];
  local_5b = param_2[2];
  local_5a = param_2[3];
  local_59 = param_2[4];
  local_58 = param_2[5];
  local_57 = 1;
  local_56 = 1;
  if (sVar1 == 0) {
    uVar3 = 3;
    uVar2 = 0xb;
  }
  else {
    uVar3 = 6;
    uVar2 = 3;
  }
  local_60 = param_4;
  local_5f = param_3;
  FUN_1002eb5e0(param_1,uVar3,&local_60,uVar2,0,0);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

