
ulong FUN_100b25fa0(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(*param_1 + -0x18);
  if (*(ulong *)(lVar3 + 0x58 + (long)param_1) % *(ulong *)(lVar3 + 0x38 + (long)param_1) != 0) {
    FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 == (m_DataArea.End % m_Parameters.SectorSize)","StructuredBase.cpp",0x87f,
                  "Offset2PhyBlockIdx");
    lVar3 = *(long *)(*param_1 + -0x18);
  }
  lVar4 = param_1[4];
  uVar2 = *(ulong *)(lVar4 + 0x20);
  if (uVar2 % *(ulong *)(lVar3 + 0x38 + (long)param_1) != 0) {
    FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 == (m_Info->GetDataOffsetBytes() % m_Parameters.SectorSize)",
                  "StructuredBase.cpp",0x880,"Offset2PhyBlockIdx");
    lVar4 = param_1[4];
    uVar2 = *(ulong *)(lVar4 + 0x20);
  }
  uVar1 = *(ulong *)(*(long *)(**(long **)(lVar4 + 0x38) + -0x18) + 0x38 +
                    (long)*(long **)(lVar4 + 0x38));
  return (((param_2 / uVar1 - 1) - uVar2 / uVar1) + (ulong)*(uint *)(lVar4 + 0x10)) /
         (ulong)*(uint *)(lVar4 + 0x10);
}

