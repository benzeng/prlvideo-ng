
void _aesni_set_decrypt_key(undefined8 param_1,int param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *extraout_RDX;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  iVar7 = _aesni_set_encrypt_key();
  if (iVar7 == 0) {
    puVar3 = (undefined8 *)((long)extraout_RDX + (ulong)(uint)(param_2 << 4) + 0x10);
    uVar4 = extraout_RDX[1];
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    *puVar3 = *extraout_RDX;
    puVar3[1] = uVar4;
    *extraout_RDX = uVar5;
    extraout_RDX[1] = uVar6;
    pauVar8 = (undefined1 (*) [16])(extraout_RDX + 2);
    pauVar9 = (undefined1 (*) [16])(puVar3 + -2);
    do {
      auVar10 = aesimc(*pauVar8);
      auVar11 = aesimc(*pauVar9);
      pauVar1 = pauVar8 + 1;
      pauVar2 = pauVar9 + -1;
      *pauVar9 = auVar10;
      *pauVar8 = auVar11;
      pauVar8 = pauVar1;
      pauVar9 = pauVar2;
    } while (pauVar1 < pauVar2);
    auVar10 = aesimc(*pauVar1);
    *pauVar2 = auVar10;
  }
  return;
}

