
void FUN_1000cd200(long param_1,QString *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  uint *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x105) != '\0') {
    QMutex::lock();
    local_38 = *(undefined8 *)(param_1 + 0x210);
    puVar5 = *(uint **)(param_1 + 0x58);
    uVar1 = puVar5[3];
    uVar2 = puVar5[2];
    if (0 < (int)((long)(int)uVar1 - (long)(int)uVar2)) {
      puVar6 = (undefined8 *)(param_1 + 0x58);
      lVar7 = 0;
      while( true ) {
        if (1 < *puVar5) {
          FUN_1000e6e10(puVar6,puVar5[1]);
          puVar5 = (uint *)*puVar6;
        }
        lVar3 = *(long *)(puVar5 + ((int)puVar5[2] + lVar7) * 2 + 4);
        cVar4 = operator==((QString *)(lVar3 + 8),param_2);
        if (cVar4 != '\0') break;
        lVar7 = lVar7 + 1;
        if ((long)(int)uVar1 - (long)(int)uVar2 <= lVar7) goto LAB_1000cd2b9;
        puVar5 = (uint *)*puVar6;
      }
      if (lVar3 != 0) {
        local_38 = *(undefined8 *)(lVar3 + 0x30);
      }
    }
LAB_1000cd2b9:
    if ((local_38._4_4_ != 0) || ((int)local_38 != 0)) {
      _local_40 = CONCAT44(1,param_3);
      FUN_1000c4970(&local_38,0x88,&local_40,8);
    }
    QMutex::unlock();
  }
  return;
}

