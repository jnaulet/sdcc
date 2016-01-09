/*
 * This definitions of the PIC16LF1784 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <molnarkaroly@users.sf.net> 2016.
 *
 * This file is generated automatically by the cinc2h.pl, 2016-01-09 15:09:20 UTC.
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * but explicitly does not cover any code or objects generated by sdcc.
 *
 * For pic device libraries and header files which are derived from
 * Microchip header (.inc) and linker script (.lkr) files Microchip
 * requires that "The header files should state that they are only to be
 * used with authentic Microchip devices" which makes them incompatible
 * with the GPL. Pic device libraries and header files are located at
 * non-free/lib and non-free/include directories respectively.
 * Sdcc should be run with the --use-non-free command line option in
 * order to include non-free header files and libraries.
 *
 * See http://sdcc.sourceforge.net/ for the latest information on sdcc.
 */

#include <pic16lf1784.h>

//==============================================================================

__at(0x0000) __sfr INDF0;

__at(0x0001) __sfr INDF1;

__at(0x0002) __sfr PCL;

__at(0x0003) __sfr STATUS;
__at(0x0003) volatile __STATUSbits_t STATUSbits;

__at(0x0004) __sfr FSR0;

__at(0x0004) __sfr FSR0L;

__at(0x0005) __sfr FSR0H;

__at(0x0006) __sfr FSR1;

__at(0x0006) __sfr FSR1L;

__at(0x0007) __sfr FSR1H;

__at(0x0008) __sfr BSR;
__at(0x0008) volatile __BSRbits_t BSRbits;

__at(0x0009) __sfr WREG;

__at(0x000A) __sfr PCLATH;

__at(0x000B) __sfr INTCON;
__at(0x000B) volatile __INTCONbits_t INTCONbits;

__at(0x000C) __sfr PORTA;
__at(0x000C) volatile __PORTAbits_t PORTAbits;

__at(0x000D) __sfr PORTB;
__at(0x000D) volatile __PORTBbits_t PORTBbits;

__at(0x000E) __sfr PORTC;
__at(0x000E) volatile __PORTCbits_t PORTCbits;

__at(0x000F) __sfr PORTD;
__at(0x000F) volatile __PORTDbits_t PORTDbits;

__at(0x0010) __sfr PORTE;
__at(0x0010) volatile __PORTEbits_t PORTEbits;

__at(0x0011) __sfr PIR1;
__at(0x0011) volatile __PIR1bits_t PIR1bits;

__at(0x0012) __sfr PIR2;
__at(0x0012) volatile __PIR2bits_t PIR2bits;

__at(0x0013) __sfr PIR3;
__at(0x0013) volatile __PIR3bits_t PIR3bits;

__at(0x0014) __sfr PIR4;
__at(0x0014) volatile __PIR4bits_t PIR4bits;

__at(0x0015) __sfr TMR0;

__at(0x0016) __sfr TMR1;

__at(0x0016) __sfr TMR1L;

__at(0x0017) __sfr TMR1H;

__at(0x0018) __sfr T1CON;
__at(0x0018) volatile __T1CONbits_t T1CONbits;

__at(0x0019) __sfr T1GCON;
__at(0x0019) volatile __T1GCONbits_t T1GCONbits;

__at(0x001A) __sfr TMR2;

__at(0x001B) __sfr PR2;

__at(0x001C) __sfr T2CON;
__at(0x001C) volatile __T2CONbits_t T2CONbits;

__at(0x008C) __sfr TRISA;
__at(0x008C) volatile __TRISAbits_t TRISAbits;

__at(0x008D) __sfr TRISB;
__at(0x008D) volatile __TRISBbits_t TRISBbits;

__at(0x008E) __sfr TRISC;
__at(0x008E) volatile __TRISCbits_t TRISCbits;

__at(0x008F) __sfr TRISD;
__at(0x008F) volatile __TRISDbits_t TRISDbits;

__at(0x0090) __sfr TRISE;
__at(0x0090) volatile __TRISEbits_t TRISEbits;

__at(0x0091) __sfr PIE1;
__at(0x0091) volatile __PIE1bits_t PIE1bits;

__at(0x0092) __sfr PIE2;
__at(0x0092) volatile __PIE2bits_t PIE2bits;

__at(0x0093) __sfr PIE3;
__at(0x0093) volatile __PIE3bits_t PIE3bits;

__at(0x0094) __sfr PIE4;
__at(0x0094) volatile __PIE4bits_t PIE4bits;

__at(0x0095) __sfr OPTION_REG;
__at(0x0095) volatile __OPTION_REGbits_t OPTION_REGbits;

__at(0x0096) __sfr PCON;
__at(0x0096) volatile __PCONbits_t PCONbits;

__at(0x0097) __sfr WDTCON;
__at(0x0097) volatile __WDTCONbits_t WDTCONbits;

__at(0x0098) __sfr OSCTUNE;
__at(0x0098) volatile __OSCTUNEbits_t OSCTUNEbits;

__at(0x0099) __sfr OSCCON;
__at(0x0099) volatile __OSCCONbits_t OSCCONbits;

__at(0x009A) __sfr OSCSTAT;
__at(0x009A) volatile __OSCSTATbits_t OSCSTATbits;

__at(0x009B) __sfr ADRES;

__at(0x009B) __sfr ADRESL;

__at(0x009C) __sfr ADRESH;

__at(0x009D) __sfr ADCON0;
__at(0x009D) volatile __ADCON0bits_t ADCON0bits;

__at(0x009E) __sfr ADCON1;
__at(0x009E) volatile __ADCON1bits_t ADCON1bits;

__at(0x009F) __sfr ADCON2;
__at(0x009F) volatile __ADCON2bits_t ADCON2bits;

__at(0x010C) __sfr LATA;
__at(0x010C) volatile __LATAbits_t LATAbits;

__at(0x010D) __sfr LATB;
__at(0x010D) volatile __LATBbits_t LATBbits;

__at(0x010E) __sfr LATC;
__at(0x010E) volatile __LATCbits_t LATCbits;

__at(0x010F) __sfr LATD;
__at(0x010F) volatile __LATDbits_t LATDbits;

__at(0x0110) __sfr LATE;
__at(0x0110) volatile __LATEbits_t LATEbits;

__at(0x0111) __sfr CM1CON0;
__at(0x0111) volatile __CM1CON0bits_t CM1CON0bits;

__at(0x0112) __sfr CM1CON1;
__at(0x0112) volatile __CM1CON1bits_t CM1CON1bits;

__at(0x0113) __sfr CM2CON0;
__at(0x0113) volatile __CM2CON0bits_t CM2CON0bits;

__at(0x0114) __sfr CM2CON1;
__at(0x0114) volatile __CM2CON1bits_t CM2CON1bits;

__at(0x0115) __sfr CMOUT;
__at(0x0115) volatile __CMOUTbits_t CMOUTbits;

__at(0x0116) __sfr BORCON;
__at(0x0116) volatile __BORCONbits_t BORCONbits;

__at(0x0117) __sfr FVRCON;
__at(0x0117) volatile __FVRCONbits_t FVRCONbits;

__at(0x0118) __sfr DACCON0;
__at(0x0118) volatile __DACCON0bits_t DACCON0bits;

__at(0x0119) __sfr DACCON1;
__at(0x0119) volatile __DACCON1bits_t DACCON1bits;

__at(0x011A) __sfr CM4CON0;
__at(0x011A) volatile __CM4CON0bits_t CM4CON0bits;

__at(0x011B) __sfr CM4CON1;
__at(0x011B) volatile __CM4CON1bits_t CM4CON1bits;

__at(0x011C) __sfr APFCON2;
__at(0x011C) volatile __APFCON2bits_t APFCON2bits;

__at(0x011D) __sfr APFCON;
__at(0x011D) volatile __APFCONbits_t APFCONbits;

__at(0x011D) __sfr APFCON0;
__at(0x011D) volatile __APFCON0bits_t APFCON0bits;

__at(0x011D) __sfr APFCON1;
__at(0x011D) volatile __APFCON1bits_t APFCON1bits;

__at(0x011E) __sfr CM3CON0;
__at(0x011E) volatile __CM3CON0bits_t CM3CON0bits;

__at(0x011F) __sfr CM3CON1;
__at(0x011F) volatile __CM3CON1bits_t CM3CON1bits;

__at(0x018C) __sfr ANSELA;
__at(0x018C) volatile __ANSELAbits_t ANSELAbits;

__at(0x018D) __sfr ANSELB;
__at(0x018D) volatile __ANSELBbits_t ANSELBbits;

__at(0x018F) __sfr ANSELD;
__at(0x018F) volatile __ANSELDbits_t ANSELDbits;

__at(0x0190) __sfr ANSELE;
__at(0x0190) volatile __ANSELEbits_t ANSELEbits;

__at(0x0191) __sfr EEADR;

__at(0x0191) __sfr EEADRL;

__at(0x0192) __sfr EEADRH;

__at(0x0193) __sfr EEDAT;

__at(0x0193) __sfr EEDATL;

__at(0x0194) __sfr EEDATH;

__at(0x0195) __sfr EECON1;
__at(0x0195) volatile __EECON1bits_t EECON1bits;

__at(0x0196) __sfr EECON2;

__at(0x0199) __sfr RC1REG;

__at(0x0199) __sfr RCREG;

__at(0x0199) __sfr RCREG1;

__at(0x019A) __sfr TX1REG;

__at(0x019A) __sfr TXREG;

__at(0x019A) __sfr TXREG1;

__at(0x019B) __sfr SP1BRG;

__at(0x019B) __sfr SP1BRGL;

__at(0x019B) __sfr SPBRG;

__at(0x019B) __sfr SPBRG1;

__at(0x019B) __sfr SPBRGL;

__at(0x019C) __sfr SP1BRGH;

__at(0x019C) __sfr SPBRGH;

__at(0x019C) __sfr SPBRGH1;

__at(0x019D) __sfr RC1STA;
__at(0x019D) volatile __RC1STAbits_t RC1STAbits;

__at(0x019D) __sfr RCSTA;
__at(0x019D) volatile __RCSTAbits_t RCSTAbits;

__at(0x019D) __sfr RCSTA1;
__at(0x019D) volatile __RCSTA1bits_t RCSTA1bits;

__at(0x019E) __sfr TX1STA;
__at(0x019E) volatile __TX1STAbits_t TX1STAbits;

__at(0x019E) __sfr TXSTA;
__at(0x019E) volatile __TXSTAbits_t TXSTAbits;

__at(0x019E) __sfr TXSTA1;
__at(0x019E) volatile __TXSTA1bits_t TXSTA1bits;

__at(0x019F) __sfr BAUD1CON;
__at(0x019F) volatile __BAUD1CONbits_t BAUD1CONbits;

__at(0x019F) __sfr BAUDCON;
__at(0x019F) volatile __BAUDCONbits_t BAUDCONbits;

__at(0x019F) __sfr BAUDCON1;
__at(0x019F) volatile __BAUDCON1bits_t BAUDCON1bits;

__at(0x019F) __sfr BAUDCTL;
__at(0x019F) volatile __BAUDCTLbits_t BAUDCTLbits;

__at(0x019F) __sfr BAUDCTL1;
__at(0x019F) volatile __BAUDCTL1bits_t BAUDCTL1bits;

__at(0x020C) __sfr WPUA;
__at(0x020C) volatile __WPUAbits_t WPUAbits;

__at(0x020D) __sfr WPUB;
__at(0x020D) volatile __WPUBbits_t WPUBbits;

__at(0x020E) __sfr WPUC;
__at(0x020E) volatile __WPUCbits_t WPUCbits;

__at(0x020F) __sfr WPUD;
__at(0x020F) volatile __WPUDbits_t WPUDbits;

__at(0x0210) __sfr WPUE;
__at(0x0210) volatile __WPUEbits_t WPUEbits;

__at(0x0211) __sfr SSP1BUF;
__at(0x0211) volatile __SSP1BUFbits_t SSP1BUFbits;

__at(0x0211) __sfr SSPBUF;
__at(0x0211) volatile __SSPBUFbits_t SSPBUFbits;

__at(0x0212) __sfr SSP1ADD;
__at(0x0212) volatile __SSP1ADDbits_t SSP1ADDbits;

__at(0x0212) __sfr SSPADD;
__at(0x0212) volatile __SSPADDbits_t SSPADDbits;

__at(0x0213) __sfr SSP1MSK;
__at(0x0213) volatile __SSP1MSKbits_t SSP1MSKbits;

__at(0x0213) __sfr SSPMSK;
__at(0x0213) volatile __SSPMSKbits_t SSPMSKbits;

__at(0x0214) __sfr SSP1STAT;
__at(0x0214) volatile __SSP1STATbits_t SSP1STATbits;

__at(0x0214) __sfr SSPSTAT;
__at(0x0214) volatile __SSPSTATbits_t SSPSTATbits;

__at(0x0215) __sfr SSP1CON;
__at(0x0215) volatile __SSP1CONbits_t SSP1CONbits;

__at(0x0215) __sfr SSP1CON1;
__at(0x0215) volatile __SSP1CON1bits_t SSP1CON1bits;

__at(0x0215) __sfr SSPCON;
__at(0x0215) volatile __SSPCONbits_t SSPCONbits;

__at(0x0215) __sfr SSPCON1;
__at(0x0215) volatile __SSPCON1bits_t SSPCON1bits;

__at(0x0216) __sfr SSP1CON2;
__at(0x0216) volatile __SSP1CON2bits_t SSP1CON2bits;

__at(0x0216) __sfr SSPCON2;
__at(0x0216) volatile __SSPCON2bits_t SSPCON2bits;

__at(0x0217) __sfr SSP1CON3;
__at(0x0217) volatile __SSP1CON3bits_t SSP1CON3bits;

__at(0x0217) __sfr SSPCON3;
__at(0x0217) volatile __SSPCON3bits_t SSPCON3bits;

__at(0x028C) __sfr ODCONA;
__at(0x028C) volatile __ODCONAbits_t ODCONAbits;

__at(0x028D) __sfr ODCONB;
__at(0x028D) volatile __ODCONBbits_t ODCONBbits;

__at(0x028E) __sfr ODCONC;
__at(0x028E) volatile __ODCONCbits_t ODCONCbits;

__at(0x028F) __sfr ODCOND;
__at(0x028F) volatile __ODCONDbits_t ODCONDbits;

__at(0x0290) __sfr ODCONE;
__at(0x0290) volatile __ODCONEbits_t ODCONEbits;

__at(0x0291) __sfr CCPR1;

__at(0x0291) __sfr CCPR1L;

__at(0x0292) __sfr CCPR1H;

__at(0x0293) __sfr CCP1CON;
__at(0x0293) volatile __CCP1CONbits_t CCP1CONbits;

__at(0x0298) __sfr CCPR2;

__at(0x0298) __sfr CCPR2L;

__at(0x0299) __sfr CCPR2H;

__at(0x029A) __sfr CCP2CON;
__at(0x029A) volatile __CCP2CONbits_t CCP2CONbits;

__at(0x030C) __sfr SLRCONA;
__at(0x030C) volatile __SLRCONAbits_t SLRCONAbits;

__at(0x030D) __sfr SLRCONB;
__at(0x030D) volatile __SLRCONBbits_t SLRCONBbits;

__at(0x030E) __sfr SLRCONC;
__at(0x030E) volatile __SLRCONCbits_t SLRCONCbits;

__at(0x030F) __sfr SLRCOND;
__at(0x030F) volatile __SLRCONDbits_t SLRCONDbits;

__at(0x0310) __sfr SLRCONE;
__at(0x0310) volatile __SLRCONEbits_t SLRCONEbits;

__at(0x0311) __sfr CCPR3;

__at(0x0311) __sfr CCPR3L;

__at(0x0312) __sfr CCPR3H;

__at(0x0313) __sfr CCP3CON;
__at(0x0313) volatile __CCP3CONbits_t CCP3CONbits;

__at(0x038C) __sfr INLVLA;
__at(0x038C) volatile __INLVLAbits_t INLVLAbits;

__at(0x038D) __sfr INLVLB;
__at(0x038D) volatile __INLVLBbits_t INLVLBbits;

__at(0x038E) __sfr INLVLC;
__at(0x038E) volatile __INLVLCbits_t INLVLCbits;

__at(0x038F) __sfr INLVLD;
__at(0x038F) volatile __INLVLDbits_t INLVLDbits;

__at(0x0390) __sfr INLVLE;
__at(0x0390) volatile __INLVLEbits_t INLVLEbits;

__at(0x0391) __sfr IOCAP;
__at(0x0391) volatile __IOCAPbits_t IOCAPbits;

__at(0x0392) __sfr IOCAN;
__at(0x0392) volatile __IOCANbits_t IOCANbits;

__at(0x0393) __sfr IOCAF;
__at(0x0393) volatile __IOCAFbits_t IOCAFbits;

__at(0x0394) __sfr IOCBP;
__at(0x0394) volatile __IOCBPbits_t IOCBPbits;

__at(0x0395) __sfr IOCBN;
__at(0x0395) volatile __IOCBNbits_t IOCBNbits;

__at(0x0396) __sfr IOCBF;
__at(0x0396) volatile __IOCBFbits_t IOCBFbits;

__at(0x0397) __sfr IOCCP;
__at(0x0397) volatile __IOCCPbits_t IOCCPbits;

__at(0x0398) __sfr IOCCN;
__at(0x0398) volatile __IOCCNbits_t IOCCNbits;

__at(0x0399) __sfr IOCCF;
__at(0x0399) volatile __IOCCFbits_t IOCCFbits;

__at(0x039D) __sfr IOCEP;
__at(0x039D) volatile __IOCEPbits_t IOCEPbits;

__at(0x039E) __sfr IOCEN;
__at(0x039E) volatile __IOCENbits_t IOCENbits;

__at(0x039F) __sfr IOCEF;
__at(0x039F) volatile __IOCEFbits_t IOCEFbits;

__at(0x0511) __sfr OPA1CON;
__at(0x0511) volatile __OPA1CONbits_t OPA1CONbits;

__at(0x0513) __sfr OPA2CON;
__at(0x0513) volatile __OPA2CONbits_t OPA2CONbits;

__at(0x0515) __sfr OPA3CON;
__at(0x0515) volatile __OPA3CONbits_t OPA3CONbits;

__at(0x051A) __sfr CLKRCON;
__at(0x051A) volatile __CLKRCONbits_t CLKRCONbits;

__at(0x0811) __sfr PSMC1CON;
__at(0x0811) volatile __PSMC1CONbits_t PSMC1CONbits;

__at(0x0812) __sfr PSMC1MDL;
__at(0x0812) volatile __PSMC1MDLbits_t PSMC1MDLbits;

__at(0x0813) __sfr PSMC1SYNC;
__at(0x0813) volatile __PSMC1SYNCbits_t PSMC1SYNCbits;

__at(0x0814) __sfr PSMC1CLK;
__at(0x0814) volatile __PSMC1CLKbits_t PSMC1CLKbits;

__at(0x0815) __sfr PSMC1OEN;
__at(0x0815) volatile __PSMC1OENbits_t PSMC1OENbits;

__at(0x0816) __sfr PSMC1POL;
__at(0x0816) volatile __PSMC1POLbits_t PSMC1POLbits;

__at(0x0817) __sfr PSMC1BLNK;
__at(0x0817) volatile __PSMC1BLNKbits_t PSMC1BLNKbits;

__at(0x0818) __sfr PSMC1REBS;
__at(0x0818) volatile __PSMC1REBSbits_t PSMC1REBSbits;

__at(0x0819) __sfr PSMC1FEBS;
__at(0x0819) volatile __PSMC1FEBSbits_t PSMC1FEBSbits;

__at(0x081A) __sfr PSMC1PHS;
__at(0x081A) volatile __PSMC1PHSbits_t PSMC1PHSbits;

__at(0x081B) __sfr PSMC1DCS;
__at(0x081B) volatile __PSMC1DCSbits_t PSMC1DCSbits;

__at(0x081C) __sfr PSMC1PRS;
__at(0x081C) volatile __PSMC1PRSbits_t PSMC1PRSbits;

__at(0x081D) __sfr PSMC1ASDC;
__at(0x081D) volatile __PSMC1ASDCbits_t PSMC1ASDCbits;

__at(0x081E) __sfr PSMC1ASDL;
__at(0x081E) volatile __PSMC1ASDLbits_t PSMC1ASDLbits;

__at(0x081F) __sfr PSMC1ASDS;
__at(0x081F) volatile __PSMC1ASDSbits_t PSMC1ASDSbits;

__at(0x0820) __sfr PSMC1INT;
__at(0x0820) volatile __PSMC1INTbits_t PSMC1INTbits;

__at(0x0821) __sfr PSMC1PH;

__at(0x0821) __sfr PSMC1PHL;
__at(0x0821) volatile __PSMC1PHLbits_t PSMC1PHLbits;

__at(0x0822) __sfr PSMC1PHH;
__at(0x0822) volatile __PSMC1PHHbits_t PSMC1PHHbits;

__at(0x0823) __sfr PSMC1DC;

__at(0x0823) __sfr PSMC1DCL;
__at(0x0823) volatile __PSMC1DCLbits_t PSMC1DCLbits;

__at(0x0824) __sfr PSMC1DCH;
__at(0x0824) volatile __PSMC1DCHbits_t PSMC1DCHbits;

__at(0x0825) __sfr PSMC1PR;

__at(0x0825) __sfr PSMC1PRL;
__at(0x0825) volatile __PSMC1PRLbits_t PSMC1PRLbits;

__at(0x0826) __sfr PSMC1PRH;
__at(0x0826) volatile __PSMC1PRHbits_t PSMC1PRHbits;

__at(0x0827) __sfr PSMC1TMR;

__at(0x0827) __sfr PSMC1TMRL;
__at(0x0827) volatile __PSMC1TMRLbits_t PSMC1TMRLbits;

__at(0x0828) __sfr PSMC1TMRH;
__at(0x0828) volatile __PSMC1TMRHbits_t PSMC1TMRHbits;

__at(0x0829) __sfr PSMC1DBR;
__at(0x0829) volatile __PSMC1DBRbits_t PSMC1DBRbits;

__at(0x082A) __sfr PSMC1DBF;
__at(0x082A) volatile __PSMC1DBFbits_t PSMC1DBFbits;

__at(0x082B) __sfr PSMC1BLKR;
__at(0x082B) volatile __PSMC1BLKRbits_t PSMC1BLKRbits;

__at(0x082C) __sfr PSMC1BLKF;
__at(0x082C) volatile __PSMC1BLKFbits_t PSMC1BLKFbits;

__at(0x082D) __sfr PSMC1FFA;
__at(0x082D) volatile __PSMC1FFAbits_t PSMC1FFAbits;

__at(0x082E) __sfr PSMC1STR0;
__at(0x082E) volatile __PSMC1STR0bits_t PSMC1STR0bits;

__at(0x082F) __sfr PSMC1STR1;
__at(0x082F) volatile __PSMC1STR1bits_t PSMC1STR1bits;

__at(0x0831) __sfr PSMC2CON;
__at(0x0831) volatile __PSMC2CONbits_t PSMC2CONbits;

__at(0x0832) __sfr PSMC2MDL;
__at(0x0832) volatile __PSMC2MDLbits_t PSMC2MDLbits;

__at(0x0833) __sfr PSMC2SYNC;
__at(0x0833) volatile __PSMC2SYNCbits_t PSMC2SYNCbits;

__at(0x0834) __sfr PSMC2CLK;
__at(0x0834) volatile __PSMC2CLKbits_t PSMC2CLKbits;

__at(0x0835) __sfr PSMC2OEN;
__at(0x0835) volatile __PSMC2OENbits_t PSMC2OENbits;

__at(0x0836) __sfr PSMC2POL;
__at(0x0836) volatile __PSMC2POLbits_t PSMC2POLbits;

__at(0x0837) __sfr PSMC2BLNK;
__at(0x0837) volatile __PSMC2BLNKbits_t PSMC2BLNKbits;

__at(0x0838) __sfr PSMC2REBS;
__at(0x0838) volatile __PSMC2REBSbits_t PSMC2REBSbits;

__at(0x0839) __sfr PSMC2FEBS;
__at(0x0839) volatile __PSMC2FEBSbits_t PSMC2FEBSbits;

__at(0x083A) __sfr PSMC2PHS;
__at(0x083A) volatile __PSMC2PHSbits_t PSMC2PHSbits;

__at(0x083B) __sfr PSMC2DCS;
__at(0x083B) volatile __PSMC2DCSbits_t PSMC2DCSbits;

__at(0x083C) __sfr PSMC2PRS;
__at(0x083C) volatile __PSMC2PRSbits_t PSMC2PRSbits;

__at(0x083D) __sfr PSMC2ASDC;
__at(0x083D) volatile __PSMC2ASDCbits_t PSMC2ASDCbits;

__at(0x083E) __sfr PSMC2ASDL;
__at(0x083E) volatile __PSMC2ASDLbits_t PSMC2ASDLbits;

__at(0x083F) __sfr PSMC2ASDS;
__at(0x083F) volatile __PSMC2ASDSbits_t PSMC2ASDSbits;

__at(0x0840) __sfr PSMC2INT;
__at(0x0840) volatile __PSMC2INTbits_t PSMC2INTbits;

__at(0x0841) __sfr PSMC2PH;

__at(0x0841) __sfr PSMC2PHL;
__at(0x0841) volatile __PSMC2PHLbits_t PSMC2PHLbits;

__at(0x0842) __sfr PSMC2PHH;
__at(0x0842) volatile __PSMC2PHHbits_t PSMC2PHHbits;

__at(0x0843) __sfr PSMC2DC;

__at(0x0843) __sfr PSMC2DCL;
__at(0x0843) volatile __PSMC2DCLbits_t PSMC2DCLbits;

__at(0x0844) __sfr PSMC2DCH;
__at(0x0844) volatile __PSMC2DCHbits_t PSMC2DCHbits;

__at(0x0845) __sfr PSMC2PR;

__at(0x0845) __sfr PSMC2PRL;
__at(0x0845) volatile __PSMC2PRLbits_t PSMC2PRLbits;

__at(0x0846) __sfr PSMC2PRH;
__at(0x0846) volatile __PSMC2PRHbits_t PSMC2PRHbits;

__at(0x0847) __sfr PSMC2TMR;

__at(0x0847) __sfr PSMC2TMRL;
__at(0x0847) volatile __PSMC2TMRLbits_t PSMC2TMRLbits;

__at(0x0848) __sfr PSMC2TMRH;
__at(0x0848) volatile __PSMC2TMRHbits_t PSMC2TMRHbits;

__at(0x0849) __sfr PSMC2DBR;
__at(0x0849) volatile __PSMC2DBRbits_t PSMC2DBRbits;

__at(0x084A) __sfr PSMC2DBF;
__at(0x084A) volatile __PSMC2DBFbits_t PSMC2DBFbits;

__at(0x084B) __sfr PSMC2BLKR;
__at(0x084B) volatile __PSMC2BLKRbits_t PSMC2BLKRbits;

__at(0x084C) __sfr PSMC2BLKF;
__at(0x084C) volatile __PSMC2BLKFbits_t PSMC2BLKFbits;

__at(0x084D) __sfr PSMC2FFA;
__at(0x084D) volatile __PSMC2FFAbits_t PSMC2FFAbits;

__at(0x084E) __sfr PSMC2STR0;
__at(0x084E) volatile __PSMC2STR0bits_t PSMC2STR0bits;

__at(0x084F) __sfr PSMC2STR1;
__at(0x084F) volatile __PSMC2STR1bits_t PSMC2STR1bits;

__at(0x0851) __sfr PSMC3CON;
__at(0x0851) volatile __PSMC3CONbits_t PSMC3CONbits;

__at(0x0852) __sfr PSMC3MDL;
__at(0x0852) volatile __PSMC3MDLbits_t PSMC3MDLbits;

__at(0x0853) __sfr PSMC3SYNC;
__at(0x0853) volatile __PSMC3SYNCbits_t PSMC3SYNCbits;

__at(0x0854) __sfr PSMC3CLK;
__at(0x0854) volatile __PSMC3CLKbits_t PSMC3CLKbits;

__at(0x0855) __sfr PSMC3OEN;
__at(0x0855) volatile __PSMC3OENbits_t PSMC3OENbits;

__at(0x0856) __sfr PSMC3POL;
__at(0x0856) volatile __PSMC3POLbits_t PSMC3POLbits;

__at(0x0857) __sfr PSMC3BLNK;
__at(0x0857) volatile __PSMC3BLNKbits_t PSMC3BLNKbits;

__at(0x0858) __sfr PSMC3REBS;
__at(0x0858) volatile __PSMC3REBSbits_t PSMC3REBSbits;

__at(0x0859) __sfr PSMC3FEBS;
__at(0x0859) volatile __PSMC3FEBSbits_t PSMC3FEBSbits;

__at(0x085A) __sfr PSMC3PHS;
__at(0x085A) volatile __PSMC3PHSbits_t PSMC3PHSbits;

__at(0x085B) __sfr PSMC3DCS;
__at(0x085B) volatile __PSMC3DCSbits_t PSMC3DCSbits;

__at(0x085C) __sfr PSMC3PRS;
__at(0x085C) volatile __PSMC3PRSbits_t PSMC3PRSbits;

__at(0x085D) __sfr PSMC3ASDC;
__at(0x085D) volatile __PSMC3ASDCbits_t PSMC3ASDCbits;

__at(0x085E) __sfr PSMC3ASDL;
__at(0x085E) volatile __PSMC3ASDLbits_t PSMC3ASDLbits;

__at(0x085F) __sfr PSMC3ASDS;
__at(0x085F) volatile __PSMC3ASDSbits_t PSMC3ASDSbits;

__at(0x0860) __sfr PSMC3INT;
__at(0x0860) volatile __PSMC3INTbits_t PSMC3INTbits;

__at(0x0861) __sfr PSMC3PH;

__at(0x0861) __sfr PSMC3PHL;
__at(0x0861) volatile __PSMC3PHLbits_t PSMC3PHLbits;

__at(0x0862) __sfr PSMC3PHH;
__at(0x0862) volatile __PSMC3PHHbits_t PSMC3PHHbits;

__at(0x0863) __sfr PSMC3DC;

__at(0x0863) __sfr PSMC3DCL;
__at(0x0863) volatile __PSMC3DCLbits_t PSMC3DCLbits;

__at(0x0864) __sfr PSMC3DCH;
__at(0x0864) volatile __PSMC3DCHbits_t PSMC3DCHbits;

__at(0x0865) __sfr PSMC3PR;

__at(0x0865) __sfr PSMC3PRL;
__at(0x0865) volatile __PSMC3PRLbits_t PSMC3PRLbits;

__at(0x0866) __sfr PSMC3PRH;
__at(0x0866) volatile __PSMC3PRHbits_t PSMC3PRHbits;

__at(0x0867) __sfr PSMC3TMR;

__at(0x0867) __sfr PSMC3TMRL;
__at(0x0867) volatile __PSMC3TMRLbits_t PSMC3TMRLbits;

__at(0x0868) __sfr PSMC3TMRH;
__at(0x0868) volatile __PSMC3TMRHbits_t PSMC3TMRHbits;

__at(0x0869) __sfr PSMC3DBR;
__at(0x0869) volatile __PSMC3DBRbits_t PSMC3DBRbits;

__at(0x086A) __sfr PSMC3DBF;
__at(0x086A) volatile __PSMC3DBFbits_t PSMC3DBFbits;

__at(0x086B) __sfr PSMC3BLKR;
__at(0x086B) volatile __PSMC3BLKRbits_t PSMC3BLKRbits;

__at(0x086C) __sfr PSMC3BLKF;
__at(0x086C) volatile __PSMC3BLKFbits_t PSMC3BLKFbits;

__at(0x086D) __sfr PSMC3FFA;
__at(0x086D) volatile __PSMC3FFAbits_t PSMC3FFAbits;

__at(0x086E) __sfr PSMC3STR0;
__at(0x086E) volatile __PSMC3STR0bits_t PSMC3STR0bits;

__at(0x086F) __sfr PSMC3STR1;
__at(0x086F) volatile __PSMC3STR1bits_t PSMC3STR1bits;

__at(0x0FE4) __sfr STATUS_SHAD;
__at(0x0FE4) volatile __STATUS_SHADbits_t STATUS_SHADbits;

__at(0x0FE5) __sfr WREG_SHAD;

__at(0x0FE6) __sfr BSR_SHAD;

__at(0x0FE7) __sfr PCLATH_SHAD;

__at(0x0FE8) __sfr FSR0L_SHAD;

__at(0x0FE9) __sfr FSR0H_SHAD;

__at(0x0FEA) __sfr FSR1L_SHAD;

__at(0x0FEB) __sfr FSR1H_SHAD;

__at(0x0FED) __sfr STKPTR;

__at(0x0FEE) __sfr TOSL;

__at(0x0FEF) __sfr TOSH;
