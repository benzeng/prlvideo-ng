
undefined8 FUN_1006be9f0(long param_1,char *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  if (param_2[1] == '\x01') {
    if (param_2[2] == '\x06') {
      if (*param_2 == '\x01') {
        if (*(int *)(param_2 + 0x1c) == *(int *)(param_1 + 0x49)) {
          if (*(short *)(param_2 + 0x20) == *(short *)(param_1 + 0x4d)) {
            uVar4 = *(undefined4 *)(param_1 + 0x4f);
            *(undefined4 *)(param_2 + 0x1c) = uVar4;
            uVar3 = *(undefined2 *)(param_1 + 0x53);
            *(undefined2 *)(param_2 + 0x20) = uVar3;
            pcVar6 = param_2 + param_3;
            param_2 = param_2 + 0xf0;
            uVar5 = CONCAT71((uint7)(uint3)(CONCAT22((short)((uint)uVar4 >> 0x10),uVar3) >> 8),1);
            while( true ) {
              while( true ) {
                if (pcVar6 <= param_2) {
                  return uVar5;
                }
                cVar1 = *param_2;
                if (cVar1 == -1) {
                  return uVar5;
                }
                if (cVar1 != '\0') break;
                param_2 = param_2 + 1;
              }
              if ((long)pcVar6 - (long)param_2 < 2) {
                return uVar5;
              }
              bVar2 = param_2[1];
              if ((long)pcVar6 - (long)(param_2 + 2) < (long)(ulong)bVar2) {
                return uVar5;
              }
              if (cVar1 == '=') break;
              param_2 = param_2 + (ulong)bVar2 + 2;
            }
            if ((((bVar2 == 7) && (param_2[2] == '\x01')) &&
                (*(int *)(param_2 + 3) == *(int *)(param_1 + 0x49))) &&
               (*(short *)(param_2 + 7) == *(short *)(param_1 + 0x4d))) {
              *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x4f);
              *(undefined2 *)(param_2 + 7) = *(undefined2 *)(param_1 + 0x53);
            }
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

