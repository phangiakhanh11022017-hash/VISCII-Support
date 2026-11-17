# 🇻🇳 VISCII Support

A lightweight library and utility for encoding, decoding, and converting Vietnamese text using the **VISCII** (VIetnamese Standard Code for Information Interchange - [RFC 1456](https://rfc-editor.org)) character set to and from modern **Unicode (UTF-8)**.

---

## 📖 Overview

**VISCII** is an 8-bit Vietnamese character encoding standard introduced in 1992. Because Vietnamese requires 134 accented characters, VISCII utilizes all 128 extended ASCII code points plus **6 ASCII control character slots** to fit the entire precomposed Vietnamese alphabet into a single-byte encoding.

This project provides full **VISCII Support** to help modern applications:
- Parse and recover legacy Vietnamese documents, emails, and databases from the 1990s.
- Normalize legacy VISCII-encoded text (commonly paired with `VI...` fonts like *VI Times* or *VI Arial*) into standard **UTF-8**.
- Export UTF-8 strings back to VISCII byte streams for compatibility with legacy software or embedded hardware.

---

## ✨ Features

- [x] **VISCII to Unicode (Decode):** Accurately converts raw 8-bit VISCII byte streams into UTF-8 strings.
- [x] **Unicode to VISCII (Encode):** Encodes UTF-8 Vietnamese text into VISCII byte arrays.
- [x] **Control Character Preservation:** Safely handles the 6 uppercase Vietnamese characters mapped to ASCII control codes (`0x02`, `0x05`, `0x06`, `0x14`, `0x19`, `0x1E`).
- [x] **Batch File Conversion:** Supports reading and converting legacy `.txt`, `.csv`, and `.html` files via CLI.

---

## ⚙️ Installation

*(Customize the commands below according to your project's language/ecosystem)*

```bash
# Clone the repository
git clone https://github.com
cd viscii-support

# Install dependencies (e.g., Python or Node.js)
pip install -r requirements.txt
# or: npm install
```

---

## 🚀 Usage

### 1. Programmatic Usage (Example)

```python
from viscii_support import viscii_to_unicode, unicode_to_viscii

# Decode VISCII bytes to Unicode (UTF-8)
raw_viscii = b"\x56\x69\xec\x74\x20\x4e\x61\x6d"
text_utf8 = viscii_to_unicode(raw_viscii)
print(text_utf8)  # Output: Việt Nam

# Encode Unicode string to VISCII bytes
encoded_bytes = unicode_to_viscii("Tiếng Việt")
print(encoded_bytes)
```

### 2. Command-Line Interface (CLI)

```bash
python convert.py --input legacy_doc.txt --output output_utf8.txt --mode to-unicode
```

---

## ⚠️ Technical Notes

1. **Binary File Handling:** Because VISCII repurposes 6 ASCII control characters (`STX`, `ENQ`, `ACK`, `DC4`, `EM`, `RS`) for uppercase accented letters (`Ả`, `Ã`, `Ạ`, `Ắ`, `Ằ`, `Ặ`), **always open VISCII files in binary mode (`rb` / `wb`)**. Opening them in standard text mode on modern OS environments may corrupt or strip these characters.
2. **Encoding Distinction:** This tool strictly follows the **VISCII (RFC 1456)** specification. It is not compatible with **TCVN3 (VSCII)** or **VNI** encodings without prior conversion.

---

## 🤝 Contributing

Contributions, bug reports, and pull requests are welcome!

1. Fork the repository.
2. Create a new feature branch (`git checkout -b feature/your-feature-name`).
3. Commit your changes (`git commit -m 'Add some feature'`).
4. Push to the branch (`git push origin feature/your-feature-name`).
5. Open a **Pull Request**.

---

## 📄 License

Distributed under the [MIT License](LICENSE). See `LICENSE` for more information.
