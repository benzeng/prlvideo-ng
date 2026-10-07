
void FUN_1008878f0(void)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  long *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  
  if (DAT_1011c0db0 == (undefined **)0x0) {
    FUN_10081d010(9,1,"err.c",0x127);
    if (DAT_1011c0db0 == (undefined **)0x0) {
      DAT_1011c0db0 = &PTR_FUN_100bde1a8;
    }
    FUN_10081d010(10,1,"err.c",0x12a);
  }
  if (DAT_1011ae720 != 0) {
    puVar4 = &DAT_1011ae720;
    do {
      (*(code *)DAT_1011c0db0[3])(puVar4);
      plVar6 = puVar4 + 2;
      puVar4 = puVar4 + 2;
    } while (*plVar6 != 0);
  }
  if (DAT_1011ae8f0 != 0) {
    puVar4 = &DAT_1011ae8f0;
    do {
      (*(code *)DAT_1011c0db0[3])(puVar4);
      plVar6 = puVar4 + 2;
      puVar4 = puVar4 + 2;
    } while (*plVar6 != 0);
  }
  if (DAT_1011aeb40 != 0) {
    puVar5 = &DAT_1011aeb40;
    uVar2 = DAT_1011aeb40;
    do {
      *puVar5 = uVar2 | 0x2000000;
      (*(code *)DAT_1011c0db0[3])(puVar5);
      uVar2 = puVar5[2];
      puVar5 = puVar5 + 2;
    } while (uVar2 != 0);
  }
  FUN_10081d010(5,1,"err.c",0x247);
  if (DAT_1011c2910 == '\x01') {
    uVar7 = 6;
    uVar3 = 0x249;
  }
  else {
    FUN_10081d010(6,1,"err.c",0x24d);
    FUN_10081d010(9,1,"err.c",0x24e);
    lVar9 = 1;
    if (DAT_1011c2910 == '\x01') {
      uVar7 = 10;
      uVar3 = 0x250;
    }
    else {
      pcVar8 = &DAT_1011c1930;
      plVar6 = &DAT_1011c0dc8;
      do {
        plVar6[-1] = lVar9;
        if (*plVar6 == 0) {
          pcVar1 = _strerror((int)lVar9);
          if (pcVar1 == (char *)0x0) {
            pcVar1 = (char *)*plVar6;
          }
          else {
            _strncpy(pcVar8,pcVar1,0x20);
            pcVar8[0x1f] = '\0';
            *plVar6 = (long)pcVar8;
            pcVar1 = pcVar8;
          }
          if (pcVar1 == (char *)0x0) {
            *plVar6 = (long)"unknown";
          }
        }
        lVar9 = lVar9 + 1;
        pcVar8 = pcVar8 + 0x20;
        plVar6 = plVar6 + 2;
      } while (lVar9 != 0x80);
      DAT_1011c2910 = '\x01';
      uVar7 = 10;
      uVar3 = 0x26c;
    }
  }
  FUN_10081d010(uVar7,1,"err.c",uVar3);
  if (DAT_1011c0dc0 != 0) {
    puVar5 = &DAT_1011c0dc0;
    uVar2 = DAT_1011c0dc0;
    do {
      *puVar5 = uVar2 | 0x2000000;
      (*(code *)DAT_1011c0db0[3])(puVar5);
      uVar2 = puVar5[2];
      puVar5 = puVar5 + 2;
    } while (uVar2 != 0);
  }
  return;
}

