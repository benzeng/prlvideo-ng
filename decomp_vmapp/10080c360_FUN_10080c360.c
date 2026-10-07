
int FUN_10080c360(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((param_1[0xa6] & 3) == 1) {
    if (param_1[0xa7] == 0) {
      uVar3 = FUN_10080ee80(param_1);
      if (((uVar3 & 0x3000) == 0) && (param_1[0xb] == 0)) {
        puVar4 = (undefined2 *)FUN_10081ddd0(0x25,"d1_both.c",0x682);
        *puVar4 = 1;
        *(undefined1 *)(puVar4 + 1) = 0x12;
        *(undefined1 *)((long)puVar4 + 3) = *(undefined1 *)((long)param_1 + 0x2a1);
        *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(param_1 + 0xa8);
        iVar1 = FUN_100886f90((long)puVar4 + 5,0x10);
        iVar2 = -1;
        if ((-1 < iVar1) &&
           ((iVar1 = FUN_100886f90((long)puVar4 + 0x15,0x10), -1 < iVar1 &&
            (iVar2 = FUN_100809cd0(param_1,0x18,puVar4,0x25), -1 < iVar2)))) {
          if (*(code **)(param_1 + 0x26) != (code *)0x0) {
            (**(code **)(param_1 + 0x26))
                      (1,*param_1,0x18,puVar4,0x25,param_1,*(undefined8 *)(param_1 + 0x28));
          }
          FUN_100807eb0(param_1);
          param_1[0xa7] = 1;
        }
        FUN_10081e1a0(puVar4);
        return iVar2;
      }
      uVar5 = 0xf4;
      uVar6 = 0x66e;
    }
    else {
      uVar5 = 0x16e;
      uVar6 = 0x668;
    }
  }
  else {
    uVar5 = 0x16d;
    uVar6 = 0x662;
  }
  FUN_100887ce0(0x14,0x131,uVar5,"d1_both.c",uVar6);
  return -1;
}

