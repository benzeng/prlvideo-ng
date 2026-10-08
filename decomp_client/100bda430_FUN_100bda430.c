
int FUN_100bda430(undefined4 *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar7 = *(long *)(param_1 + 0x20);
  pcVar3 = *(char **)(lVar7 + 0x130);
  if (*(code **)(param_1 + 0x26) != (code *)0x0) {
    (**(code **)(param_1 + 0x26))
              (0,*param_1,0x18,pcVar3,*(undefined4 *)(lVar7 + 0x124),param_1,
               *(undefined8 *)(param_1 + 0x28));
    lVar7 = *(long *)(param_1 + 0x20);
  }
  iVar5 = 0;
  iVar4 = 0;
  if (0x12 < *(uint *)(lVar7 + 0x124)) {
    cVar1 = pcVar3[1];
    cVar2 = pcVar3[2];
    uVar9 = (uint)CONCAT11(cVar1,cVar2);
    uVar8 = uVar9 + 0x13;
    if (uVar8 <= *(uint *)(lVar7 + 0x124)) {
      if (*pcVar3 == '\x02') {
        if ((uVar9 == 0x12) && (iVar5 = iVar4, (uint)CONCAT11(pcVar3[3],pcVar3[4]) == param_1[0xa8])
           ) {
          param_1[0xa8] = CONCAT11(pcVar3[3],pcVar3[4]) + 1;
          param_1[0xa7] = 0;
        }
      }
      else {
        iVar5 = iVar4;
        if (*pcVar3 == '\x01') {
          puVar6 = (undefined1 *)FUN_100bf3540(uVar8,"t1_lib.c",0xa15);
          *puVar6 = 2;
          puVar6[1] = cVar1;
          puVar6[2] = cVar2;
          _memcpy(puVar6 + 3,pcVar3 + 3,(ulong)uVar9);
          iVar5 = FUN_100c62190(puVar6 + (ulong)uVar9 + 3,0x10);
          if (iVar5 < 0) {
            FUN_100bf3910(puVar6);
            iVar5 = -1;
          }
          else {
            iVar5 = FUN_100bd10c0(param_1,0x18,puVar6);
            if (iVar5 < 0) {
              FUN_100bf3910(puVar6);
            }
            else {
              if (*(code **)(param_1 + 0x26) != (code *)0x0) {
                (**(code **)(param_1 + 0x26))
                          (1,*param_1,0x18,puVar6,uVar8,param_1,*(undefined8 *)(param_1 + 0x28));
              }
              FUN_100bf3910(puVar6);
              iVar5 = 0;
            }
          }
        }
      }
    }
  }
  return iVar5;
}

