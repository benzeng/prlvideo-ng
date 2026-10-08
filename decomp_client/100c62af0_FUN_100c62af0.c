
void FUN_100c62af0(void)

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
  
  if (DAT_1023167f0 == (undefined **)0x0) {
    FUN_100bf2780(9,1,"err.c",0x127);
    if (DAT_1023167f0 == (undefined **)0x0) {
      DAT_1023167f0 = &PTR_FUN_10224e4e8;
    }
    FUN_100bf2780(10,1,"err.c",0x12a);
  }
  if (DAT_1023084f0 != 0) {
    puVar4 = &DAT_1023084f0;
    do {
      (*(code *)DAT_1023167f0[3])(puVar4);
      plVar6 = puVar4 + 2;
      puVar4 = puVar4 + 2;
    } while (*plVar6 != 0);
  }
  if (DAT_1023086c0 != 0) {
    puVar4 = &DAT_1023086c0;
    do {
      (*(code *)DAT_1023167f0[3])(puVar4);
      plVar6 = puVar4 + 2;
      puVar4 = puVar4 + 2;
    } while (*plVar6 != 0);
  }
  if (DAT_102308910 != 0) {
    puVar5 = &DAT_102308910;
    uVar2 = DAT_102308910;
    do {
      *puVar5 = uVar2 | 0x2000000;
      (*(code *)DAT_1023167f0[3])(puVar5);
      uVar2 = puVar5[2];
      puVar5 = puVar5 + 2;
    } while (uVar2 != 0);
  }
  FUN_100bf2780(5,1,"err.c",0x247);
  if (DAT_102318350 == '\x01') {
    uVar7 = 6;
    uVar3 = 0x249;
  }
  else {
    FUN_100bf2780(6,1,"err.c",0x24d);
    FUN_100bf2780(9,1,"err.c",0x24e);
    lVar9 = 1;
    if (DAT_102318350 == '\x01') {
      uVar7 = 10;
      uVar3 = 0x250;
    }
    else {
      pcVar8 = &DAT_102317370;
      plVar6 = &DAT_102316808;
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
      DAT_102318350 = '\x01';
      uVar7 = 10;
      uVar3 = 0x26c;
    }
  }
  FUN_100bf2780(uVar7,1,"err.c",uVar3);
  if (DAT_102316800 != 0) {
    puVar5 = &DAT_102316800;
    uVar2 = DAT_102316800;
    do {
      *puVar5 = uVar2 | 0x2000000;
      (*(code *)DAT_1023167f0[3])(puVar5);
      uVar2 = puVar5[2];
      puVar5 = puVar5 + 2;
    } while (uVar2 != 0);
  }
  return;
}

