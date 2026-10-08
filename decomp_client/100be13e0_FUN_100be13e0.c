
undefined8 FUN_100be13e0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  int local_34;
  undefined8 local_30;
  
  local_34 = 0;
  local_30 = FUN_100cbc6b0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x268));
  auVar3 = FUN_100cbc6c0(&local_30);
  if (auVar3._0_8_ != 0) {
    do {
      lVar1 = *(long *)(auVar3._0_8_ + 8);
      iVar2 = FUN_100be14a0(param_1,(uint)*(ushort *)(lVar1 + 0x10) * 2 - *(int *)(lVar1 + 0x28) &
                                    0xffff,auVar3._8_8_,&local_34);
      if ((iVar2 < 1) && (local_34 != 0)) {
        _fwrite("dtls1_retransmit_message() failed\n",0x22,1,*(FILE **)PTR____stderrp_1021e1848);
        return 0xffffffff;
      }
      auVar3 = FUN_100cbc6c0(&local_30);
    } while (auVar3._0_8_ != 0);
  }
  return 1;
}

