
int FUN_10080c1a0(undefined4 *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = *(long *)(param_1 + 0x20);
  pcVar3 = *(char **)(lVar6 + 0x130);
  if (*(code **)(param_1 + 0x26) != (code *)0x0) {
    (**(code **)(param_1 + 0x26))
              (0,*param_1,0x18,pcVar3,*(undefined4 *)(lVar6 + 0x124),param_1,
               *(undefined8 *)(param_1 + 0x28));
    lVar6 = *(long *)(param_1 + 0x20);
  }
  if (*(uint *)(lVar6 + 0x124) - 0x13 < 0x3fee) {
    cVar1 = pcVar3[1];
    cVar2 = pcVar3[2];
    uVar8 = (uint)CONCAT11(cVar1,cVar2);
    uVar7 = uVar8 + 0x13;
    if (uVar7 <= *(uint *)(lVar6 + 0x124)) {
      if (*pcVar3 == '\x02') {
        if (uVar8 != 0x12) {
          return 0;
        }
        if ((uint)CONCAT11(pcVar3[3],pcVar3[4]) == param_1[0xa8]) {
          FUN_100808010(param_1);
          param_1[0xa8] = param_1[0xa8] + 1;
          param_1[0xa7] = 0;
        }
      }
      else {
        if (*pcVar3 != '\x01') {
          return 0;
        }
        if (0x4000 < uVar7) {
          return 0;
        }
        puVar5 = (undefined1 *)FUN_10081ddd0(uVar7,"d1_both.c",0x62d);
        *puVar5 = 2;
        puVar5[1] = cVar1;
        puVar5[2] = cVar2;
        _memcpy(puVar5 + 3,pcVar3 + 3,(ulong)uVar8);
        iVar4 = FUN_100886f90(puVar5 + (ulong)uVar8 + 3,0x10);
        if (iVar4 < 0) {
          FUN_10081e1a0(puVar5);
          return -1;
        }
        iVar4 = FUN_100809cd0(param_1,0x18,puVar5);
        if (iVar4 < 0) {
          FUN_10081e1a0(puVar5);
          return iVar4;
        }
        if (*(code **)(param_1 + 0x26) != (code *)0x0) {
          (**(code **)(param_1 + 0x26))
                    (1,*param_1,0x18,puVar5,uVar7,param_1,*(undefined8 *)(param_1 + 0x28));
        }
        FUN_10081e1a0(puVar5);
      }
    }
  }
  return 0;
}

