
undefined8 FUN_1007c56b0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  bool bVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 uVar3;
  
  bVar4 = false;
  uVar1 = _fcntl(param_1,1,0);
  uVar3 = CONCAT44(extraout_var,uVar1);
  if (-1 < (int)uVar1) {
    if ((uVar1 & 1) == 0) {
      bVar4 = false;
      iVar2 = _fcntl(param_1,2,(ulong)(uVar1 | 1));
      uVar3 = CONCAT44(extraout_var_00,iVar2);
      if (iVar2 < 0) goto LAB_1007c57d7;
    }
    local_1c = 0x8000;
    iVar2 = _setsockopt(param_1,0xffff,0x1001,&local_1c,4);
    uVar3 = CONCAT44(extraout_var_01,iVar2);
    if (iVar2 < 0) {
      bVar4 = false;
    }
    else {
      local_1c = 0x8000;
      iVar2 = _setsockopt(param_1,0xffff,0x1002,&local_1c,4);
      uVar3 = CONCAT44(extraout_var_02,iVar2);
      if (iVar2 < 0) {
        bVar4 = false;
      }
      else {
        local_20 = 1;
        iVar2 = _setsockopt(param_1,6,1,&local_20,4);
        if (iVar2 < 0) {
          FUN_1008e3970("","IOCommunication",0,"TCP_NODELAY setting failed");
        }
        bVar4 = false;
        uVar1 = _fcntl(param_1,3,0);
        uVar3 = CONCAT44(extraout_var_03,uVar1);
        if ((-1 < (int)uVar1) && (bVar4 = true, (uVar1 & 4) == 0)) {
          iVar2 = _fcntl(param_1,4,(ulong)(uVar1 | 4));
          uVar3 = CONCAT44(extraout_var_04,iVar2);
          bVar4 = -1 < iVar2;
        }
      }
    }
  }
LAB_1007c57d7:
  return CONCAT71((int7)((ulong)uVar3 >> 8),bVar4);
}

