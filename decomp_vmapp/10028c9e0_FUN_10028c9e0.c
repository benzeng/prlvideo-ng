
void FUN_10028c9e0(uint param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char cVar8;
  ulong uVar9;
  short sVar10;
  undefined1 uVar11;
  
  puVar3 = _malloc(0x88);
  if (puVar3 != (undefined8 *)0x0) {
    ___bzero(puVar3,0x88);
    if (DAT_1011b8f58 == '\0') {
      DAT_1011b8f58 = '\x01';
      lVar4 = 0;
      puVar6 = &DAT_1011b9081;
      puVar7 = &DAT_1011b8f7d;
      cVar8 = '\0';
      do {
        *(undefined4 *)((long)&DAT_1011b917c + lVar4) = DAT_1011b95c0;
        *(undefined8 *)((long)&DAT_1011b9174 + lVar4) = DAT_1011b95b8;
        *(undefined8 *)((long)&DAT_1011b916c + lVar4) = DAT_1011b95b0;
        *(undefined8 *)((long)&DAT_1011b9164 + lVar4) = DAT_1011b95a8;
        *(undefined4 *)((long)&DAT_1011b9160 + lVar4) = DAT_1011b95e8;
        *(undefined8 *)((long)&DAT_1011b9158 + lVar4) = DAT_1011b95e0;
        *(undefined8 *)((long)&DAT_1011b9150 + lVar4) = DAT_1011b95d8;
        *(undefined8 *)((long)&DAT_1011b9148 + lVar4) = DAT_1011b95d0;
        *(undefined8 *)((long)&DAT_1011b9140 + lVar4) = DAT_1011b95c8;
        *(char *)((long)&DAT_1011b9150 + lVar4 + 6) = cVar8;
        puVar7[-0x10] = 1;
        *puVar6 = 1;
        *(undefined4 *)((long)&DAT_1011b91bc + lVar4) = DAT_1011b95c0;
        *(undefined8 *)((long)&DAT_1011b91b4 + lVar4) = DAT_1011b95b8;
        *(undefined8 *)((long)&DAT_1011b91ac + lVar4) = DAT_1011b95b0;
        *(undefined8 *)((long)&DAT_1011b91a4 + lVar4) = DAT_1011b95a8;
        *(undefined4 *)((long)&DAT_1011b91a0 + lVar4) = DAT_1011b95e8;
        *(undefined8 *)((long)&DAT_1011b9198 + lVar4) = DAT_1011b95e0;
        *(undefined8 *)((long)&DAT_1011b9190 + lVar4) = DAT_1011b95d8;
        *(undefined8 *)((long)&DAT_1011b9188 + lVar4) = DAT_1011b95d0;
        *(undefined8 *)((long)&DAT_1011b9180 + lVar4) = DAT_1011b95c8;
        *(char *)((long)&DAT_1011b9190 + lVar4 + 6) = cVar8 + '\x01';
        *puVar7 = 1;
        puVar6[0xc] = 1;
        cVar8 = cVar8 + '\x02';
        lVar4 = lVar4 + 0x80;
        puVar6 = puVar6 + 0x18;
        puVar7 = puVar7 + 0x20;
      } while (lVar4 != 0x400);
    }
    *(uint *)(puVar3 + 2) = param_1;
    uVar9 = (ulong)param_1;
    lVar4 = uVar9 * 0x10;
    uVar11 = (undefined1)param_1;
    (&DAT_1011b8f6c)[lVar4] = uVar11;
    (&DAT_1011b9080)[uVar9 * 0xc] = uVar11;
    sVar10 = (short)param_1 + 1;
    uVar1 = (uint)(param_2 >> 8);
    uVar5 = CONCAT44((uVar1 & 0xf000000 | 0x20c40150) >> 0x18,
                     (uint)((param_2 << 0x38) >> 0x38) |
                     (uint)(((param_2 & 0xff00) << 0x28) >> 0x28) | (uVar1 & 0xff00) << 8 |
                     (int)(param_2 >> 0x18) << 0x18) | 0x5001c40000000000;
    (&DAT_1011b8f6f)[lVar4] = 9;
    *(undefined4 *)(&DAT_1011b8f70 + lVar4) = 0x841;
    *(undefined4 *)(&DAT_1011b9084 + uVar9 * 0xc) = 0x841;
    *(short *)(&DAT_1011b8f74 + lVar4) = sVar10;
    *(short *)(&DAT_1011b8f76 + lVar4) = sVar10;
    *(short *)(&DAT_1011b9148 + uVar9 * 8) = sVar10;
    *(short *)((long)&DAT_1011b9150 + uVar9 * 0x40 + 4) = sVar10;
    *(ulong *)((long)&DAT_1011b9148 + uVar9 * 0x40 + 4) = uVar5;
    *(undefined4 *)(&DAT_1011b9158 + uVar9 * 8) = 1;
    puVar3[0x10] = &DAT_1011b9140 + uVar9 * 8;
    *(undefined4 *)((long)puVar3 + 0x34) = DAT_1011b9560;
    *(undefined8 *)((long)puVar3 + 0x2c) = DAT_1011b9558;
    *(undefined8 *)((long)puVar3 + 0x24) = DAT_1011b9550;
    *(undefined8 *)((long)puVar3 + 0x1c) = DAT_1011b9548;
    *(undefined8 *)((long)puVar3 + 0x14) = DAT_1011b9540;
    puVar3[4] = uVar5;
    *(undefined2 *)(puVar3 + 5) = 8;
    *(short *)((long)puVar3 + 0x2c) = sVar10;
    *(undefined1 *)((long)puVar3 + 0x2e) = uVar11;
    *(undefined1 *)((long)puVar3 + 0x36) = uVar11;
    puVar3[0xc] = DAT_1011b958c;
    puVar3[0xb] = DAT_1011b9584;
    puVar3[10] = DAT_1011b957c;
    puVar3[9] = DAT_1011b9574;
    puVar3[8] = DAT_1011b956c;
    puVar3[7] = DAT_1011b9564;
    *(ulong *)((long)puVar3 + 0x44) = uVar5;
    *(short *)(puVar3 + 10) = sVar10;
    *(undefined1 *)((long)puVar3 + 0x52) = uVar11;
    *(undefined4 *)(puVar3 + 0xf) = DAT_1011b95a4;
    puVar3[0xe] = DAT_1011b959c;
    puVar3[0xd] = DAT_1011b9594;
    *puVar3 = puVar3;
    puVar3[1] = puVar3;
    QMutex::lock();
    puVar2 = PTR_LOOP_101115e78;
    PTR_LOOP_101115e78 = (undefined *)puVar3;
    *puVar3 = &PTR_LOOP_101115e70;
    puVar3[1] = puVar2;
    *(undefined8 **)puVar2 = puVar3;
    QMutex::unlock();
    return;
  }
  return;
}

