category: std
ipr: trust200902
area: General
stream: IETF
wg: avtcore
coding: utf-8
keyword: [Internet-Draft, JPEG XS, video, transport, real-time, protocol]
obsoletes: 9134

entity:
        SELF: "[RFCXXXX]"
        
pi:
  strict: yes
  toc: yes
  tocdepth: 4
  sortrefs: yes
  symrefs: yes
  compact: yes
  comments: yes

author:
  -
    ins: T. Bruylants
    name: Tim Bruylants
    org: intoPIX S.A.
    abbrev: intoPIX
    street: Rue Emile Francqui 9
    city: Mont-Saint-Guibert
    code: B-1435
    country: Belgium
    phone: +32 10 23 84 70
    email: t.bruylants@intopix.com
    uri: https://www.intopix.com/
  -
    ins: T. Richter
    name: Thomas Richter
    org: Fraunhofer IIS
    abbrev: Fraunhofer IIS
    street: Am Wolfsmantel 33
    city: Erlangen
    code: D-91058
    country: Germany
    phone: +49 9131 776 5126
    email: thomas.richter@iis.fraunhofer.de
    uri: https://www.iis.fraunhofer.de/
  -
    ins: C. Damman Geeroms
    name: Corentin Damman Geeroms
    org: intoPIX S.A.
    abbrev: intoPIX
    street: Rue Emile Francqui 9
    city: Mont-Saint-Guibert
    code: B-1435
    country: Belgium
    phone: +32 10 23 84 70
    email: c.damman@intopix.com
    uri: https://www.intopix.com/
  -
    ins: A. Descampe
    name: Antonin Descampe
    org: Université Catholique de Louvain
    abbrev: UCLouvain
    street: Ruelle de la Lanterne Magique, 14
    city: Louvain-la-Neuve
    code: B-1348
    country: Belgium
    phone: +32 10 47 27 87
    email: antonin.descampe@uclouvain.be
    uri: https://uclouvain.be/antonin.descampe

normative:
  RFC3264:
  RFC3550:
  RFC3551:
  RFC4855:
  RFC6838:
  RFC8083:
  RFC8085:
  RFC8866:
  ISO21122-1:
    title: 'Information technology - JPEG XS low-latency lightweight image coding system - Part 1: Core coding system'
    author:
      -
        org: 'ISO/IEC'
    seriesinfo:
      "ISO/IEC": 'IS 21122-1'
    date: false
  ISO21122-2:
    title: 'Information technology - JPEG XS low-latency lightweight image coding system - Part 2: Profiles and buffer models'
    author:
      -
        org: 'ISO/IEC'
    seriesinfo:
      "ISO/IEC": 'IS 21122-2'
    date: false
  ISO21122-3:
    title: 'Information technology - JPEG XS low-latency lightweight image coding system - Part 3: Transport and container formats'
    author:
      -
        org: 'ISO/IEC'
    seriesinfo:
      "ISO/IEC": 'IS 21122-3'
    date: false

informative:
  RFC3711:
  RFC4175:
  RFC4585:
  RFC5124:
  RFC7201:
  RFC7202:
  RFC8888:
  RFC9134:
  BT1886-0:
    title: 'Reference electro-optical transfer function for flat panel displays used in HDTV studio production'
    target: 'https://www.itu.int/rec/R-REC-BT.1886-0-201103-I/en'
    author:
      -
        org: 'ITU-R'
    seriesinfo:      
      "ITU-R": 'Recommendation BT.1886-0'
    date: "March 2011"
  BT601-5:
    title: 'Studio encoding parameters of digital television for standard 4:3 and wide screen 16:9 aspect ratios'
    target: 'https://www.itu.int/rec/R-REC-BT.601-5-199510-S/en'
    author:
      -
        org: 'ITU-R'
    seriesinfo:      
      "ITU-R": 'Recommendation BT.601-5'
    date: "October 1995"
  BT601-7:
    title: 'Studio encoding parameters of digital television for standard 4:3 and wide screen 16:9 aspect ratios'
    target: 'https://www.itu.int/rec/R-REC-BT.601-7-201103-I/en'
    author:
      -
        org: 'ITU-R'
    seriesinfo:      
      "ITU-R": 'Recommendation BT.601-7'
    date: "March 2011"
  BT709-2:
    title: 'Parameter values for the HDTV standards for production and international programme exchange'
    target: 'https://www.itu.int/rec/R-REC-BT.709-2-199510-S/en'
    author:
      -
        org: 'ITU-R'
    seriesinfo:      
      "ITU-R": 'Recommendation BT.709-2'
    date: "October 1995"
  BT709-6:
    title: 'Parameter values for the HDTV standards for production and international programme exchange'
    target: 'https://www.itu.int/rec/R-REC-BT.709-6-201506-I/en'
    author:
      -
        org: 'ITU-R'
    seriesinfo:      
      "ITU-R": 'Recommendation BT.709-6'
    date: "June 2015"
  BT2020-2:
    title: 'Parameter values for ultra-high definition television systems for production and international programme exchange'
    target: 'https://www.itu.int/rec/R-REC-BT.2020-2-201510-I/en'
    author:
      -
        org: 'ITU-R'
    seriesinfo:      
      "ITU-R": 'Recommendation BT.2020-2'
    date: "October 2015"
  BT2100-2:
    title: 'Image parameter values for high dynamic range television for use in production and international programme exchange'
    target: 'https://www.itu.int/rec/R-REC-BT.2100-2-201807-I/en'
    author:
      -
        org: 'ITU-R'
    seriesinfo:      
      "ITU-R": 'Recommendation BT.2100-2'
    date: "July 2018"
  ISO11664-1:
    title: 'Colorimetry - Part 1: CIE standard colorimetric observers'
    target: 'https://www.iso.org/standard/74164.html'
    author:
      -
        org: 'ISO/CIE'
    seriesinfo:
      "ISO/CIE": 'IS 11664-1:2019'
    date: "June 2019"
  SMPTE157:
    title: "SMPTE Recommended Practice - Key and Alpha Signals"
    author:
      -
        org: 'SMPTE'
    seriesinfo:
      "SMPTE": 'RP 157:2012'
    date: "November 2012"
  SMPTE240M:
    title: "SMPTE Standard - For Television - 1125-Line High-Definition Production Systems - Signal Parameters"
    author:
      -
        org: 'SMPTE'
    seriesinfo:
      "SMPTE": 'ST 240M:1999'
      DOI: 10.5594/SMPTE.ST240.1999
    date: "November 1999"
  SMPTE428-1:
    title: "SMPTE Standard - D-Cinema Distribution Master - Image Characteristics"
    author:
      -
        org: 'SMPTE'
    seriesinfo:
      "SMPTE": 'ST 428-1:2019'
      DOI: 10.5594/SMPTE.ST428-1.2019
    date: "March 2019"
  SMPTE2065-1:
    title: "SMPTE Standard - Academy Color Encoding Specification (ACES)"
    author:
      -
        org: 'SMPTE'
    seriesinfo:
      "SMPTE": 'ST 2065-1:2021'
      DOI: 10.5594/SMPTE.ST2065-1.2021
    date: "January 2021"
  SMPTE2065-3:
    title: "SMPTE Standard - Academy Density Exchange Encoding (ADX) - Encoding Academy Printing Density (APD) Values"
    author:
      -
        org: 'SMPTE'
    seriesinfo:
      "SMPTE": 'ST 2065-3:2020'
      DOI: 10.5594/SMPTE.ST2065-3.2020
    date: "November 2020"
  SMPTE2077:
    title: "SMPTE Recommended Practice - Full-Range Image Mapping"
    author:
      -
        org: 'SMPTE'
    seriesinfo:
      "SMPTE": 'RP 2077:2013'
      DOI: 10.5594/SMPTE.RP2077.2013
    date: "November 2013"
  SMPTE2110-21:
    title: "SMPTE Standard - Professional Media Over Managed IP Networks: Traffic Shaping and Delivery Timing for Video"
    author:
      -
        org: 'SMPTE'
    seriesinfo:
      "SMPTE": 'ST 2110-21:2017'
      DOI: 10.5594/SMPTE.ST2110-21.2017
    date: "November 2017"
