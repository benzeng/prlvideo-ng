
int FUN_1000e2210(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,long param_6,undefined8 param_7,long param_8,undefined8 param_9,long param_10)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  
  uVar1 = *(ushort *)(param_4 + -2);
  uVar2 = *(ushort *)(param_2 + -2);
  uVar4 = *(ushort *)(param_6 + -2);
  if (uVar1 < uVar2) {
    if (uVar4 < uVar1) {
      *(ushort *)(param_2 + -2) = uVar4;
      *(ushort *)(param_6 + -2) = uVar2;
      iVar3 = 1;
      uVar4 = uVar2;
    }
    else {
      *(ushort *)(param_2 + -2) = uVar1;
      *(ushort *)(param_4 + -2) = uVar2;
      uVar4 = *(ushort *)(param_6 + -2);
      iVar3 = 1;
      if (uVar4 < uVar2) {
        *(ushort *)(param_4 + -2) = uVar4;
        *(ushort *)(param_6 + -2) = uVar2;
        iVar3 = 2;
        uVar4 = uVar2;
      }
    }
  }
  else {
    iVar3 = 0;
    if (uVar4 < uVar1) {
      *(ushort *)(param_4 + -2) = uVar4;
      *(ushort *)(param_6 + -2) = uVar1;
      uVar2 = *(ushort *)(param_2 + -2);
      iVar3 = 1;
      uVar4 = uVar1;
      if (*(ushort *)(param_4 + -2) < uVar2) {
        *(ushort *)(param_2 + -2) = *(ushort *)(param_4 + -2);
        *(ushort *)(param_4 + -2) = uVar2;
        iVar3 = 2;
        uVar4 = *(ushort *)(param_6 + -2);
      }
    }
  }
  if (*(ushort *)(param_8 + -2) < uVar4) {
    *(ushort *)(param_6 + -2) = *(ushort *)(param_8 + -2);
    *(ushort *)(param_8 + -2) = uVar4;
    uVar1 = *(ushort *)(param_4 + -2);
    if (*(ushort *)(param_6 + -2) < uVar1) {
      *(ushort *)(param_4 + -2) = *(ushort *)(param_6 + -2);
      *(ushort *)(param_6 + -2) = uVar1;
      uVar1 = *(ushort *)(param_2 + -2);
      if (*(ushort *)(param_4 + -2) < uVar1) {
        *(ushort *)(param_2 + -2) = *(ushort *)(param_4 + -2);
        *(ushort *)(param_4 + -2) = uVar1;
        iVar3 = iVar3 + 3;
      }
      else {
        iVar3 = iVar3 + 2;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  uVar1 = *(ushort *)(param_8 + -2);
  if (*(ushort *)(param_10 + -2) < uVar1) {
    *(ushort *)(param_8 + -2) = *(ushort *)(param_10 + -2);
    *(ushort *)(param_10 + -2) = uVar1;
    uVar1 = *(ushort *)(param_6 + -2);
    if (*(ushort *)(param_8 + -2) < uVar1) {
      *(ushort *)(param_6 + -2) = *(ushort *)(param_8 + -2);
      *(ushort *)(param_8 + -2) = uVar1;
      uVar1 = *(ushort *)(param_4 + -2);
      if (*(ushort *)(param_6 + -2) < uVar1) {
        *(ushort *)(param_4 + -2) = *(ushort *)(param_6 + -2);
        *(ushort *)(param_6 + -2) = uVar1;
        uVar1 = *(ushort *)(param_2 + -2);
        if (*(ushort *)(param_4 + -2) < uVar1) {
          *(ushort *)(param_2 + -2) = *(ushort *)(param_4 + -2);
          *(ushort *)(param_4 + -2) = uVar1;
          iVar3 = iVar3 + 4;
        }
        else {
          iVar3 = iVar3 + 3;
        }
      }
      else {
        iVar3 = iVar3 + 2;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

