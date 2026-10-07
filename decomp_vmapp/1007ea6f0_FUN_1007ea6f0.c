
int FUN_1007ea6f0(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  undefined4 local_26;
  undefined2 local_22;
  uint local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined4 local_16;
  undefined2 local_12;
  
  local_20 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  local_1c = CONCAT11(param_1[4],param_1[5]);
  local_1a = CONCAT11(param_1[6],param_1[7]);
  local_18 = CONCAT11(param_1[8],param_1[9]);
  local_12 = *(undefined2 *)(param_1 + 0xe);
  local_16 = *(undefined4 *)(param_1 + 10);
  uVar1 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]);
  local_22 = *(undefined2 *)(param_2 + 0xe);
  local_26 = *(undefined4 *)(param_2 + 10);
  bVar4 = local_20 < uVar1;
  if ((((local_20 == uVar1) &&
       (uVar3 = CONCAT11(param_1[4],param_1[5]), bVar4 = uVar3 < CONCAT11(param_2[4],param_2[5]),
       uVar3 == CONCAT11(param_2[4],param_2[5]))) &&
      (uVar3 = CONCAT11(param_1[6],param_1[7]), bVar4 = uVar3 < CONCAT11(param_2[6],param_2[7]),
      uVar3 == CONCAT11(param_2[6],param_2[7]))) &&
     (uVar3 = CONCAT11(param_1[8],param_1[9]), bVar4 = uVar3 < CONCAT11(param_2[8],param_2[9]),
     uVar3 == CONCAT11(param_2[8],param_2[9]))) {
    iVar2 = _memcmp(&local_16,&local_26,6);
  }
  else {
    iVar2 = 1;
    if (bVar4) {
      iVar2 = -1;
    }
  }
  return iVar2;
}

