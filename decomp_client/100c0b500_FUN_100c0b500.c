
uint FUN_100c0b500(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint in_EAX;
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint unaff_EBX;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long unaff_R14;
  uint *unaff_R15;
  uint *in_stack_00000010;
  
  while( true ) {
    uVar1 = in_EAX ^ *unaff_R15;
    uVar6 = unaff_EBX ^ unaff_R15[1];
    param_4 = param_4 ^ unaff_R15[2];
    param_3 = param_3 ^ unaff_R15[3];
    unaff_R15 = unaff_R15 + 4;
    uVar14 = CONCAT13(*(undefined1 *)(unaff_R14 + (ulong)(uVar6 >> 0x18)),
                      CONCAT12(*(undefined1 *)(unaff_R14 + (ulong)(param_4 >> 0x10 & 0xff)),
                               CONCAT11(*(undefined1 *)(unaff_R14 + (ulong)(param_3 >> 8 & 0xff)),
                                        *(undefined1 *)(unaff_R14 + (ulong)(uVar1 & 0xff)))));
    if (unaff_R15 == in_stack_00000010) break;
    uVar12 = *(ulong *)(unaff_R14 + 0x100);
    uVar13 = *(ulong *)(unaff_R14 + 0x108);
    uVar2 = CONCAT44(CONCAT13(*(undefined1 *)(unaff_R14 + (ulong)(param_4 >> 0x18)),
                              CONCAT12(*(undefined1 *)(unaff_R14 + (ulong)(param_3 >> 0x10 & 0xff)),
                                       CONCAT11(*(undefined1 *)
                                                 (unaff_R14 + (ulong)(uVar1 >> 8 & 0xff)),
                                                *(undefined1 *)(unaff_R14 + (ulong)(uVar6 & 0xff))))
                             ),uVar14);
    uVar3 = CONCAT44(CONCAT13(*(undefined1 *)(unaff_R14 + (ulong)(uVar1 >> 0x18)),
                              CONCAT12(*(undefined1 *)(unaff_R14 + (ulong)(uVar6 >> 0x10 & 0xff)),
                                       CONCAT11(*(undefined1 *)
                                                 (unaff_R14 + (ulong)(param_4 >> 8 & 0xff)),
                                                *(undefined1 *)(unaff_R14 + (ulong)(param_3 & 0xff))
                                               ))),
                     CONCAT13(*(undefined1 *)(unaff_R14 + (ulong)(param_3 >> 0x18)),
                              CONCAT12(*(undefined1 *)(unaff_R14 + (ulong)(uVar1 >> 0x10 & 0xff)),
                                       CONCAT11(*(undefined1 *)
                                                 (unaff_R14 + (ulong)(uVar6 >> 8 & 0xff)),
                                                *(undefined1 *)(unaff_R14 + (ulong)(param_4 & 0xff))
                                               ))));
    uVar17 = *(ulong *)(unaff_R14 + 0x110);
    uVar8 = (uVar2 & uVar12) - ((uVar2 & uVar12) >> 7) & uVar17 ^ uVar2 * 2 & uVar13;
    uVar4 = (uVar3 & uVar12) - ((uVar3 & uVar12) >> 7) & uVar17 ^ uVar3 * 2 & uVar13;
    uVar9 = (uVar8 & uVar12) - ((uVar8 & uVar12) >> 7) & uVar17 ^ uVar8 * 2 & uVar13;
    uVar5 = (uVar4 & uVar12) - ((uVar4 & uVar12) >> 7) & uVar17 ^ uVar4 * 2 & uVar13;
    uVar16 = uVar9 * 2 & uVar13 ^ (uVar9 & uVar12) - ((uVar9 & uVar12) >> 7) & uVar17;
    uVar22 = uVar5 * 2 & uVar13 ^ (uVar5 & uVar12) - ((uVar5 & uVar12) >> 7) & uVar17;
    uVar12 = uVar8 ^ uVar2 ^ uVar16;
    uVar20 = uVar4 ^ uVar3 ^ uVar22;
    uVar13 = uVar9 ^ uVar2 ^ uVar16;
    uVar5 = uVar5 ^ uVar3 ^ uVar22;
    uVar1 = (uint)(uVar2 ^ uVar16);
    uVar6 = (uint)(uVar3 ^ uVar22);
    uVar17 = uVar8 ^ uVar2 ^ uVar13;
    uVar4 = uVar4 ^ uVar3 ^ uVar5;
    uVar7 = (uint)((uVar2 ^ uVar16) >> 0x20);
    uVar14 = (uint)((uVar3 ^ uVar22) >> 0x20);
    uVar10 = (uint)uVar12;
    uVar18 = (uint)uVar20;
    uVar15 = (uint)(uVar12 >> 0x20);
    uVar21 = (uint)(uVar20 >> 0x20);
    uVar11 = (uint)(uVar13 >> 0x20);
    uVar19 = (uint)(uVar5 >> 0x20);
    in_EAX = (uVar1 << 8 | uVar1 >> 0x18) ^ (uint)uVar17 ^ (uVar10 << 0x18 | uVar10 >> 8) ^
             ((uint)uVar13 << 0x10 | (uint)uVar13 >> 0x10);
    param_4 = (uVar6 << 8 | uVar6 >> 0x18) ^ (uint)uVar4 ^ (uVar18 << 0x18 | uVar18 >> 8) ^
              ((uint)uVar5 << 0x10 | (uint)uVar5 >> 0x10);
    unaff_EBX = (uVar7 << 8 | uVar7 >> 0x18) ^ (uint)(uVar17 >> 0x20) ^
                (uVar15 << 0x18 | uVar15 >> 8) ^ (uVar11 << 0x10 | uVar11 >> 0x10);
    param_3 = (uVar14 << 8 | uVar14 >> 0x18) ^ (uint)(uVar4 >> 0x20) ^
              (uVar21 << 0x18 | uVar21 >> 8) ^ (uVar19 << 0x10 | uVar19 >> 0x10);
  }
  return uVar14 ^ *unaff_R15;
}

