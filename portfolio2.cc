
        .body {
            background-color:rgb(85, 176, 112);
            
        }
        .header, footer, section {
            padding: 40px 20px;
        }
        nav {
            display: flex;
            justify-content: space-between;
            align-items: center;
            background: white;
            padding: 20px;
            box-shadow: 0 2px 5px rgba(0,0,0,0.05);
        }
        nav ul {
            list-style: none;
            display: flex;
            gap: 20px;
        }
        nav ul li a {
            text-decoration: none;
            
        }
        .hero {
            background:rgb(0, 0, 0);
            text-align: center;
            padding: 80px 20px;
        }
        .hero h1 {
            font-size: 30px;
            color:rgb(32, 139, 103);
        }
        .hero img {
            max-width: 200px;
            border-radius: 50%;
        }
        .about, .services, .portfolio, .contact, .blog {
            background: white;
            margin: 20px auto;
            max-width: 1100px;
            border-radius: 12px;
            padding: 40px;
            box-shadow: 0 0 20px rgba(0,0,0,0.05);
        }
        .section-title {
            color:rgb(44, 159, 121);
            font-size: 30px;
            margin-bottom: 20px;
        }
        .services-grid, .portfolio-grid, .blog-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(220px, 1fr));
            gap: 20px;
        }
        .card {
            background:rgb(66, 120, 174);
            padding: 20px;
            border-radius: 12px;
            text-align: center;
        }
        .contact-form input, .contact-form textarea {
            width: 100%;
            padding: 12px;
            margin: 10px 0;
            border-radius: 8px;
            border: 1px solid black;
        }
        .contact-form button {
            background:rgb(42, 119, 93);
            color: white;
            border: none;
            padding: 12px 24px;
            border-radius: 8px;
            cursor: pointer;
        }
        footer {
            text-align: center;
            background:rgb(42, 129, 100);
            color: white;
            padding: 20px;
        }