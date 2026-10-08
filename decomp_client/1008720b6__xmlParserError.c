
void _xmlParserError(void *ctx,char *msg,...)

{
  byte in_AL;
  
                    /* WARNING: Could not recover jumptable at 0x00010087211e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_100872140 + (ulong)in_AL * -4))(ctx,msg,&LAB_100872140 + (ulong)in_AL * -4);
  return;
}

