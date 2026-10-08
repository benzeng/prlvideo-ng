
long * FUN_100b43430(long *param_1,undefined8 *param_2,QString *param_3,uint param_4,char param_5)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar2 = (uint *)*param_2;
  if (1 < *puVar2) {
    FUN_100b467c0(param_2,puVar2[1]);
    puVar2 = (uint *)*param_2;
  }
  puVar4 = puVar2 + (long)(int)puVar2[2] * 2 + 4;
  *param_1 = (long)puVar4;
  do {
    if (1 < *puVar2) {
      FUN_100b467c0(param_2,puVar2[1]);
      puVar2 = (uint *)*param_2;
    }
    uVar3 = puVar2[3];
    if (puVar4 == puVar2 + (long)(int)uVar3 * 2 + 4) {
      if (1 < *puVar2) {
        FUN_100b467c0(param_2,puVar2[1]);
        puVar2 = (uint *)*param_2;
        uVar3 = puVar2[3];
      }
      *param_1 = (long)(puVar2 + (long)(int)uVar3 * 2 + 4);
      return param_1;
    }
    if (((param_4 & 0x10000000) == 0) || (*(char *)(*(long *)puVar4 + 0x1c) == '\0')) {
      if (param_5 == '\0') {
        cVar1 = operator==(*(QString **)puVar4,param_3);
        if (cVar1 != '\0') {
          return param_1;
        }
        if (*(short *)(*(long *)puVar4 + 0x28) == -1) goto LAB_100b43490;
        local_48 = *(QArrayData **)(*(long *)puVar4 + 8);
        if (1 < *(int *)local_48 + 1U) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + 1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
        }
        local_50 = (QArrayData *)**(undefined8 **)puVar4;
        if (1 < *(int *)local_50 + 1U) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + 1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
        }
        local_58 = *(QArrayData **)(*(long *)puVar4 + 0x10);
        if (1 < *(int *)local_58 + 1U) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + 1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
        }
        FUN_100b3c910(&local_40,&local_48,&local_50,&local_58);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b435c9;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_100b435c9:
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b435f9;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_100b435f9:
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b4362c;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_100b4362c:
        cVar1 = operator==(param_3,&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto joined_r0x000100b43676;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
      }
      else {
        cVar1 = operator==(*(QString **)puVar4 + 2,param_3);
      }
joined_r0x000100b43676:
      if (cVar1 != '\0') {
        return param_1;
      }
    }
    else if (((*(uint *)(*(long *)puVar4 + 0x18) ^ param_4) & 0xfffffff) == 0) {
      return param_1;
    }
LAB_100b43490:
    puVar4 = puVar4 + 2;
    *param_1 = (long)puVar4;
    puVar2 = (uint *)*param_2;
  } while( true );
}

