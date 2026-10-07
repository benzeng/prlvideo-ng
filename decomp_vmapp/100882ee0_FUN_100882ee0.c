
undefined8 FUN_100882ee0(char *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  hostent *phVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint local_48 [6];
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar2;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  lVar4 = 0;
  pcVar6 = param_1;
  while( true ) {
    bVar3 = false;
    pcVar7 = pcVar6;
    while( true ) {
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      if (9 < (byte)(cVar1 - 0x30U)) break;
      uVar8 = cVar1 + -0x30 + local_48[lVar4] * 10;
      local_48[lVar4] = uVar8;
      bVar3 = true;
      pcVar7 = pcVar6;
      if (0xff < uVar8) goto LAB_100882fbd;
    }
    if (cVar1 != '.') break;
    if (!bVar3) {
      FUN_100887ce0(0x20,0x6a,0x6c,"b_sock.c",0x7b);
      goto LAB_1008830a0;
    }
    if ((int)lVar4 == 3) goto LAB_100882fbd;
    lVar4 = lVar4 + 1;
  }
  if (((bVar3) && ((int)lVar4 == 3)) && (cVar1 == '\0')) {
    *param_2 = (char)local_48._0_8_;
    param_2[1] = SUB81(local_48._0_8_,4);
    param_2[2] = (char)local_48._8_8_;
    param_2[3] = SUB81(local_48._8_8_,4);
    uVar9 = 1;
    goto LAB_1008830b8;
  }
LAB_100882fbd:
  FUN_10081d010(9,0x16,"b_sock.c",0x8e);
  phVar5 = _gethostbyname(param_1);
  if (phVar5 == (hostent *)0x0) {
    uVar9 = 0x66;
    uVar10 = 0x92;
  }
  else {
    if ((short)phVar5->h_addrtype == 2) {
      *param_2 = **phVar5->h_addr_list;
      param_2[1] = (*phVar5->h_addr_list)[1];
      param_2[2] = (*phVar5->h_addr_list)[2];
      param_2[3] = (*phVar5->h_addr_list)[3];
      FUN_10081d010(10,0x16,"b_sock.c",0xa2);
      uVar9 = 1;
      goto LAB_1008830b8;
    }
    uVar9 = 0x6b;
    uVar10 = 0x99;
  }
  FUN_100887ce0(0x20,0x6a,uVar9,"b_sock.c",uVar10);
  FUN_10081d010(10,0x16,"b_sock.c",0xa2);
LAB_1008830a0:
  uVar9 = 0;
  FUN_1008890a0(2,"host=",param_1);
LAB_1008830b8:
  if (lVar2 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

